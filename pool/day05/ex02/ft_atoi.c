/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 13:37:01 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/06 17:55:51 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	negative;
	int	num;

	negative = 1;
	num = 0;
	while (*str == ' ' || *str == '\n' || *str == '\0' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
	{
		negative = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while ((*str != '\0') && (*str >= '0' && *str <= '9'))
		num = num * 10 + (*str++ - '0');
	return (negative * num);
}
