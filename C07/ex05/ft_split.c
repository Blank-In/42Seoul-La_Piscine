/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:02:26 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/17 20:02:27 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

long long	str_length(char *str, char *charset)
{
	long long cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			++cnt;
			while (*str && !is_charset(*str, charset))
			{
				++str;
			}
		}
		++str;
	}
	return (cnt);
}

void		ft_strcpy(char *dest, char *str, int size)
{
	int cnt;

	cnt = 0;
	while (cnt < size)
	{
		dest[cnt] = str[cnt];
		++cnt;
	}
	dest[cnt] = 0;
}

char		**ft_split(char *str, char *charset)
{
	char	**list;
	char	*origin;
	int		cnt;

	list = malloc(sizeof(char*) * str_length(str, charset) + 1);
	cnt = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			origin = str;
			while (*str && !is_charset(*str, charset))
			{
				++str;
			}
			list[cnt] = malloc(sizeof(char) * (str - origin + 1));
			ft_strcpy(list[cnt], origin, str - origin);
			++cnt;
		}
		++str;
	}
	list[cnt] = 0;
	return (list);
}
