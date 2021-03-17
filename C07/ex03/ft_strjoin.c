/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 21:09:58 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/15 21:09:59 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(int size, char **str, char *sep)
{
	int a;
	int b;
	int len;
	int seplen;

	a = 0;
	len = 1;
	seplen = 0;
	while (sep[seplen])
	{
		++seplen;
	}
	while (a < size)
	{
		b = 0;
		while (str[a][b])
		{
			++b;
			++len;
		}
		if (a + 1 < size)
			len += seplen;
		++a;
	}
	return (len);
}

char	*malloc_str(int size, char **strs, char *sep)
{
	char	*list;
	int		len;

	len = ft_strlen(size, strs, sep);
	if (!(list = malloc(sizeof(char) * len)))
	{
		return (0);
	}
	return (list);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*list;
	int		a;
	int		b;
	int		c;

	list = malloc_str(size, strs, sep);
	a = 0;
	c = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b])
		{
			list[c++] = strs[a][b++];
		}
		b = 0;
		while (sep[b] && a + 1 < size)
		{
			list[c++] = sep[b++];
		}
		++a;
	}
	list[c] = 0;
	return (list);
}
