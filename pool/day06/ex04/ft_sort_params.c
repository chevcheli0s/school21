/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 17:19:34 by knarwhal          #+#    #+#             */
/*   Updated: 2019/08/07 21:39:03 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (0);
	while ((*s1 == *s2) && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort(char **str, int n)
{
	int		i;
	char	*buf;

	i = 1;
	while (i < n - 1)
	{
		while (ft_strcmp(str[i], str[i + 1]) < 0)
		{
			buf = str[i];
			str[i] = str[i + 1];
			str[i + 1] = buf;
			i = 1;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	sort(argv, argc);
	while (argc != 1)
	{
		ft_putstr(argv[argc - 1]);
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
