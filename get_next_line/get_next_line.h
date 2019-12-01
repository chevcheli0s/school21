/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <knarwhal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:46:26 by knarwhal          #+#    #+#             */
/*   Updated: 2019/11/02 20:10:06 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# include "libft/libft.h"
# include <fcntl.h>
# include <string.h>
# include <strings.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_lst
{
	int				fd;
	int				flag;
	char			*buf;
	struct s_lst	*next;
}					t_lst;

int					get_next_line(const int fd, char **line);

#endif
