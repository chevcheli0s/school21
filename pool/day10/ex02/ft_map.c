/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 17:24:07 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/13 22:45:29 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*arr;

	i = 0;
	if (!(arr = (int *)malloc(sizeof(int) * length)))
		return (NULL);
	while (i < lenght)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
