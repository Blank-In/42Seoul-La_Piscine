/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:30:57 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/15 14:31:08 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		++s1;
		++s2;
	}
	return (0);
}

void	ft_strsort(int argc, char *args[])
{
	int		cnt;
	int		size;
	char	*origin;

	while (--argc > 0)
	{
		cnt = 1;
		while (cnt < argc)
		{
			size = ft_strcmp(args[cnt], args[cnt + 1]);
			if (size > 0)
			{
				origin = args[cnt];
				args[cnt] = args[cnt + 1];
				args[cnt + 1] = origin;
			}
			++cnt;
		}
	}
}

int		main(int argc, char *args[])
{
	int		cnt;

	cnt = 1;
	ft_strsort(argc, args);
	while (cnt < argc)
	{
		while (*args[cnt])
		{
			write(1, args[cnt], 1);
			++args[cnt];
		}
		write(1, "\n", 1);
		++cnt;
	}
	return (0);
}
