/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 16:31:02 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/07 21:38:29 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (argc > 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		argc--;
		i++;
	}
	return (0);
}
