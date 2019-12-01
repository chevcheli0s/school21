/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 17:57:43 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/03 22:21:21 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int nb1;

	nb1 = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	nb = nb1 * ft_recursive_power(nb, power - 1);
	return (nb);
}
