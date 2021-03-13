/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:12:00 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/08 17:13:07 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int a;

	a = 0;
	while (*(src + a) != 0)
	{
		++a;
	}
	return (a);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int cnt;
	unsigned int length;

	cnt = 0;
	length = ft_strlen(src);
	while (cnt < length && cnt + 1 < size)
	{
		dest[cnt] = src[cnt];
		++cnt;
	}
	if (size > 0)
	{
		dest[cnt] = 0;
	}
	return (length);
}
