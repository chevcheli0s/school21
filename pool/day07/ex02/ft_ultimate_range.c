/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 17:08:23 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/08 20:10:46 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	size = max - min;
	i = 0;
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	*range = (int*)malloc(sizeof(**range) * size);
	while (i < size)
		(*range)[i++] = min++;
	return (size);
}
