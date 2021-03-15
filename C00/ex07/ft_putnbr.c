/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:28:34 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/14 17:10:01 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_nbr(int nb)
{
	if (nb > 9)
		ft_nbr(nb / 10);
	ft_write('0' + nb % 10);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_nbr(147483648);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	ft_nbr(nb);
}
