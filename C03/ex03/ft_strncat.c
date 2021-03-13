/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 18:04:23 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/12 01:35:08 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cnt;
	char			*origin;

	cnt = 0;
	origin = dest;
	while (*dest)
	{
		++dest;
	}
	while (*src && cnt++ < nb)
	{
		*dest = *src;
		++dest;
		++src;
	}
	*dest = 0;
	return (origin);
}
