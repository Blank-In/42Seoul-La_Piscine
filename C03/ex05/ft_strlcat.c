/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 01:44:38 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/12 01:59:29 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *list)
{
	unsigned int cnt;

	cnt = 0;
	while (list[cnt])
	{
		++cnt;
	}
	return (cnt);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int d_len;
	unsigned int s_len;
	unsigned int cnt;

	cnt = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	while (*dest)
	{
		++dest;
	}
	while (src[cnt] && d_len + cnt + 1 < size)
	{
		dest[cnt] = src[cnt];
		++cnt;
	}
	dest[cnt] = 0;
	if (size < d_len)
		return (s_len + size);
	else
		return (s_len + d_len);
}
