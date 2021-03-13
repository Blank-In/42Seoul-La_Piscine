/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:28:34 by minjunki          #+#    #+#             */
/*   Updated: 2021/02/22 14:28:38 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int nb, int flg, int size)
{
	if (flg < 0)
	{
		ft_putchar('-');
	}
	while (size != 0)
	{
		ft_putchar('0' + nb / size);
		nb %= size;
		size /= 10;
	}
}

void	ft_putnbr(int nb)
{
	int flg;
	int size;

	flg = 0;
	size = 10;
	if (nb < 0)
	{
		size *= --flg;
	}
	while (nb / size != 0)
	{
		if (size == 1000000000 || size == -1000000000)
		{
			break ;
		}
		size *= 10;
	}
	if (size < 1000000000 && size > -1000000000)
	{
		size /= 10;
	}
	ft_putint(nb, flg, size);
}
