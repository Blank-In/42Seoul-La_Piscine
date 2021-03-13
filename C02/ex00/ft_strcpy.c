/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:09:35 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/08 16:12:06 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *origin;

	origin = dest;
	while (*src != 0)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (origin);
}
