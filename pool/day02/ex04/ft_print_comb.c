/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 12:18:16 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/01 23:31:26 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char n1;
	char n2;
	char n3;

	n1 = 47;
	while (++n1 <= 55)
	{
		n2 = n1;
		while (++n2 <= 56)
		{
			n3 = n2;
			while (++n3 <= 57)
			{
				ft_putchar(n1);
				ft_putchar(n2);
				ft_putchar(n3);
				if (n1 + n2 + n3 != 55 + 56 + 57)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
	ft_putchar('\n');
}
