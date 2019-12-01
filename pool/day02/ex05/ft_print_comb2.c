/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 22:19:34 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/01 23:28:35 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = -1;
	while (++n1 <= 98)
	{
		n2 = n1;
		if (n1 == n2)
			while (++n2 <= 99)
			{
				ft_putchar('0' + n1 / 10);
				ft_putchar('0' + n1 % 10);
				ft_putchar(' ');
				ft_putchar('0' + n2 / 10);
				ft_putchar('0' + n2 % 10);
				if (n1 != 98 && n1 != 99)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
	}
	ft_putchar('\n');
}
