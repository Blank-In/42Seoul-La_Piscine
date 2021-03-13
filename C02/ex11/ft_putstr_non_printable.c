/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:49:47 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/08 17:51:16 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_x(unsigned char a)
{
	unsigned char back;

	back = a % 16;
	a /= 16;
	if (a > 9)
	{
		ft_putchar('a' + (a - 10));
	}
	else
	{
		ft_putchar('0' + a);
	}
	if (back > 9)
	{
		ft_putchar('a' + (back - 10));
	}
	else
	{
		ft_putchar('0' + back);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != 0)
	{
		if (*str < 32 || *str > 126)
		{
			write(1, "\\", 1);
			ft_x(*str);
		}
		else
		{
			write(1, str, 1);
		}
		++str;
	}
}
