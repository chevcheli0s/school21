/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 14:18:53 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/06 17:30:02 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	upc(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

char	lowc(char c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

int		testc(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] == '\0')
		return (str);
	str[0] = upc(str[0]);
	while (str[i] != '\0')
	{
		if (testc(str[i - 1]) == 0)
		{
			str[i] = upc(str[i]);
		}
		else
			str[i] = lowc(str[i]);
		i++;
	}
	return (str);
}
