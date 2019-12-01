/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <knarwhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:33:37 by knarwhal          #+#    #+#             */
/*   Updated: 2019/11/22 16:28:03 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_lst		*ft_create_elem(int fd)
{
	t_lst	*el;

	el = NULL;
	if (!(el = (t_lst*)malloc(sizeof(t_lst))))
		return (NULL);
	el->fd = fd;
	el->flag = 0;
	el->buf = ft_memalloc(BUFF_SIZE + 1);
	el->next = NULL;
	return (el);
}

static void			ft_list_push_front(t_lst **head, int fd)
{
	t_lst		*el;

	if (*head)
	{
		el = ft_create_elem(fd);
		el->next = *head;
		*head = el;
	}
	else
		*head = ft_create_elem(fd);
}

static int			search_in_list(t_lst *listofbuffs, int fd, t_lst **curelem)
{
	t_lst		*tmp;

	tmp = listofbuffs;
	while (tmp)
	{
		if (fd == tmp->fd)
		{
			*curelem = tmp;
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}

static int			ft_finalfunc(t_lst *curelem, char **line)
{
	int				i;
	char			*tmp;

	i = 0;
	while (curelem->buf[i] != '\n' && curelem->buf[i] != '\0')
		i++;
	if (curelem->buf[i] == '\n')
	{
		*line = ft_strsub(curelem->buf, 0, i);
		tmp = curelem->buf;
		curelem->buf = ft_strdup(&curelem->buf[i + 1]);
		free(tmp);
		return (1);
	}
	if (curelem->buf[i] == '\0' && curelem->flag == 0)
	{
		*line = ft_strdup(curelem->buf);
		curelem->flag = 1;
		return (1);
	}
	return (0);
}

int					get_next_line(const int fd, char **line)
{
	t_lst			*curelem;
	static t_lst	*listofbuffs;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	int				len;

	if (fd < 0 || BUFF_SIZE < 1 || line == 0 || read(fd, NULL, 0) == -1)
		return (-1);
	if (!(search_in_list(listofbuffs, fd, &curelem)))
	{
		ft_list_push_front(&listofbuffs, fd);
		curelem = listofbuffs;
	}
	while ((len = read(fd, buf, BUFF_SIZE)))
	{
		buf[len] = '\0';
		tmp = curelem->buf;
		curelem->buf = ft_strjoin(curelem->buf, buf);
		free(tmp);
		if (ft_strchr(curelem->buf, '\n') != NULL)
			return (ft_finalfunc(curelem, line));
	}
	if (curelem->buf[0] == '\0')
		return (0);
	return (ft_finalfunc(curelem, line));
}
