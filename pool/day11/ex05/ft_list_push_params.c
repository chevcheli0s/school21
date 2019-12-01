/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 22:36:11 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/14 22:14:53 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*el;
	t_list	*head;
	int		i;

	i = 0;
	head = NULL;
	el = head;
	while (i < ac)
	{
		el = ft_create_elem(av[i++]);
		el->next = head;
		head = el;
	}
	return (head);
}
