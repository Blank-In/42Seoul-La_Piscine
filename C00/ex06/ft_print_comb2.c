/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:15:30 by minjunki          #+#    #+#             */
/*   Updated: 2021/02/22 14:15:31 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_numb(int a)
{
	if (a < 10)
	{
		ft_putchar('0');
	}
	else
	{
		ft_putchar('0' + a / 10);
	}
	ft_putchar('0' + a % 10);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_numb(a);
			ft_putchar(' ');
			ft_numb(b);
			if (a + b != 197)
			{
				write(1, ", ", 2);
			}
			++b;
		}
		++a;
	}
}
