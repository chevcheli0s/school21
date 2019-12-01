/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 20:28:15 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/12 22:48:23 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		up;
	int		down;

	i = 0;
	up = 0;
	down = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			up++;
		if (f(tab[i], tab[i + 1]) >= 0)
			down++;
		i++;
	}
	if ((length - up == 1) || (length - down == 1))
		return (1);
	return (0);
}
