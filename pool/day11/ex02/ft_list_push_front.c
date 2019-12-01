/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:41:58 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/14 21:36:37 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *el;

	if (*begin_list)
	{
		el = ft_create_elem(data);
		el->next = *begin_list;
		*begin_list = el;
	}
	else
		*begin_list = ft_create_elem(data);
}
