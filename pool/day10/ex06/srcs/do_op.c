/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 22:31:38 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/13 17:58:15 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

int		ft_check_oper(char **argv)
{
	if (*argv[2] == '+')
		return (0);
	if (*argv[2] == '-')
		return (1);
	if (*argv[2] == '*')
		return (2);
	if (*argv[2] == '/')
		return (3);
	if (*argv[2] == '%')
		return (4);
	return (5);
}

int		ft_check_4_error(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (*argv[3] == '0' && *argv[2] == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (*argv[3] == '0' && *argv[2] == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	int		oper;
	int		res;
	int		(*arr_func[5])(int, int);

	if (ft_check_4_error(argc, argv) == 0)
		return (0);
	arr_func[0] = &ft_add;
	arr_func[1] = &ft_sub;
	arr_func[2] = &ft_mul;
	arr_func[3] = &ft_div;
	arr_func[4] = &ft_mod;
	oper = ft_check_oper(argv);
	if (oper == 5)
	{
		ft_putstr("0\n");
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	res = arr_func[oper](a, b);
	ft_putnbr(res);
	ft_putchar('\n');
}
