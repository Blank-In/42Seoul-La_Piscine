/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:03:59 by minjunki          #+#    #+#             */
/*   Updated: 2021/02/22 14:04:00 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_numb(int a, int b, int c)
{
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	ft_putchar('0' + c);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				ft_numb(a, b, c);
				if (a + b + c != 24)
				{
					write(1, ", ", 2);
				}
				++c;
			}
			++b;
		}
		++a;
	}
}
