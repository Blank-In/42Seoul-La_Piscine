/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:08:36 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/08 17:09:06 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char *origin;

	origin = str;
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		++str;
	}
	return (origin);
}
