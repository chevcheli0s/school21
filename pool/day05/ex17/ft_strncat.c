/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 22:24:34 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/06 22:32:47 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char *dests;
	char *srcs;

	srcs = src;
	dests = dest;
	while (*dest != '\0')
		dest++;
	while (nb > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		nb--;
	}
	*++dest = '\0';
	src = srcs;
	dest = dests;
	return (dest);
}
