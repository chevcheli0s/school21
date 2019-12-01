/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:46:38 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/14 21:36:24 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*el;

	el = *begin_list;
	if (*begin_list)
	{
		while (el->next)
			el = el->next;
		el->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
