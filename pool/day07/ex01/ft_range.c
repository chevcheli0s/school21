/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 14:23:59 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/08 17:01:24 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int size;
	int *arr;

	i = 0;
	arr = 0;
	size = max - min;
	if (min >= max)
		return (0);
	arr = (int*)malloc(sizeof(*arr) * size);
	while (i < size)
		arr[i++] = min++;
	return (arr);
}
