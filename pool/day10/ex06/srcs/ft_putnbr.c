/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 19:27:29 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/05 20:38:41 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		check(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char *str;
	char *start;
	char buf[10];

	str = buf;
	start = str;
	nb = check(nb);
	while (nb / 10 != 0)
	{
		*str = nb % 10 + '0';
		nb /= 10;
		str++;
	}
	ft_putchar(nb + '0');
	while (str != start)
		ft_putchar(*--str);
}
