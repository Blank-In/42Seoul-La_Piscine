/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:55:55 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/16 22:33:26 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		cnt;
	char	*str;

	cnt = 0;
	while (src[cnt])
	{
		++cnt;
	}
	if (!(str = malloc(sizeof(char) * (cnt + 1))))
		return (NULL);
	cnt = 0;
	while (src[cnt])
	{
		str[cnt] = src[cnt];
		++cnt;
	}
	str[cnt] = 0;
	return (str);
}
