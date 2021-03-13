/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:06:16 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/08 17:07:41 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *origin;

	origin = str;
	while (*str != 0)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		++str;
	}
	return (origin);
}
