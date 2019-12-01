/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 17:27:32 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/08 18:17:59 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int hour1;

	hour1 = hour;
	if (hour > 12)
		hour1 = hour % 12;
	if (hour == 0)
		hour1 = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 11 && hour > 0)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, (hour1 + 1) % 12);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 24 || hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour1, (hour1 + 1) % 12);
}
