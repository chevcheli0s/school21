/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 22:47:35 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/14 23:17:25 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*el;
	t_list	*elnext;

	el = *begin_list;
	*begin_list = NULL;
	while (el)
	{
		elnext = el->next;
		el->next = *begin_list;
		*begin_list = el;
		el = elnext;
	}
}
