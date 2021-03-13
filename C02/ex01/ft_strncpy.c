/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:12:59 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/12 00:57:15 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int cnt;

	cnt = 0;
	while (cnt < n && src[cnt] != 0)
	{
		dest[cnt] = src[cnt];
		++cnt;
	}
	while (cnt < n)
	{
		dest[cnt] = 0;
		++cnt;
	}
	return (dest);
}
