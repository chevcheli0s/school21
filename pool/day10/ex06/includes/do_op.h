/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:58:37 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/13 17:59:32 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

int		ft_add(int a, int b);
int		ft_sub(int a, int b);
int		ft_mul(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_check_oper(char **argv);
int		ft_check_4_error(int argc, char **argv);
int		ft_atoi(char *s);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int nb);
#endif
