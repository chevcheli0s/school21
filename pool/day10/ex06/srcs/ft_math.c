/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:33:17 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/13 14:34:10 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_add(int a, int b)
{
	long int result;

	result = a + b;
	if (result < -2147483648 || result > 2147483647)
		return (0);
	return (a + b);
}

int		ft_sub(int a, int b)
{
	long int result;

	result = a - b;
	if (result < -2147483648 || result > 2147483647)
		return (0);
	return (a - b);
}

int		ft_mul(int a, int b)
{
	long int result;

	result = a * b;
	if (result < (-2147483648) || result > 2147483647)
		return (0);
	return (a * b);
}

int		ft_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int		ft_mod(int a, int b)
{
	long int result;

	result = a % b;
	if (result < -2147483648 || result > 2147483647)
		return (0);
	return (a % b);
}
