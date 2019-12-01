/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:04:23 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/14 14:26:51 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*el;

	el = NULL;
	if (!(el = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	el->data = data;
	el->next = NULL;
	return (el);
}
