/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:04:15 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/08 17:05:33 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != 0)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		++str;
	}
	return (1);
}