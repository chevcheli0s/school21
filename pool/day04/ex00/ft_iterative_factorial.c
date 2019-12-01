/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 13:44:33 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/03 15:44:20 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	else
	{
		while (nb > 1)
		{
			fact *= nb;
			nb--;
		}
		return (fact);
	}
}
