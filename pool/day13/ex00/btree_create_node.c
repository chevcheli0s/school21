/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:55:05 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/15 18:04:36 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*el;

	el = (t_btree *)malloc(sizeof(t_btree));
	if (el)
	{
		el->item = item;
		el->left = NULL;
		el->right = NULL;
	}
	return (el);
}
