/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:50:59 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/12 01:28:22 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *origin;

	origin = dest;
	while (*dest)
	{
		++dest;
	}
	while (*src)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = 0;
	return (origin);
}
