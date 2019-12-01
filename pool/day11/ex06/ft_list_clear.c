/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 14:14:49 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/14 21:38:08 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*el;

	el = NULL;
	if (!begin_list || !*begin_list)
		return ;
	while (!begin_list)
	{
		el = *begin_list;
		*begin_list = (*begin_list)->next;
		free(el);
	}
	*begin_list = NULL;
}
