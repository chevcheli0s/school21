/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 21:13:13 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/08 23:20:14 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i++] = '\n';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		size;
	int		i;
	char	*str;
	int		argc1;

	i = 1;
	size = 0;
	argc1 = argc;
	while (argc1 - 1 != 0)
	{
		size += ft_strlen(argv[i++]);
		argc1--;
	}
	argc1 = argc;
	str = (char*)malloc(sizeof(str) * (size + argc1));
	i = 1;
	while (i < argc1)
		ft_strcat(str, argv[i++]);
	str[size + argc1 - 2] = '\0';
	return (str);
}
