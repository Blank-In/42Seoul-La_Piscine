/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:09:28 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/13 15:11:11 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nbr(int nbr, int flg, int size, char *base)
{
	int		cnt;
	char	list[40];

	cnt = 0;
	while (nbr != 0)
	{
		list[cnt++] = (nbr % size) * flg;
		nbr /= size;
	}
	if (flg == -1)
	{
		write(1, "-", 1);
	}
	while (cnt > 0)
	{
		write(1, &base[list[--cnt]], 1);
	}
}

int		base_check(char *base)
{
	int cnt;
	int temp;

	cnt = 0;
	if (*base == 0 || base[1] == 0)
		return (0);
	while (base[cnt])
	{
		if (base[cnt] == '+' || base[cnt] == '-')
			return (0);
		temp = cnt + 1;
		while (base[temp])
		{
			if (base[cnt] == base[temp])
				return (0);
			++temp;
		}
		++cnt;
	}
	return (cnt);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		flg;

	size = base_check(base);
	if (size == 0)
		return ;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	flg = 1;
	if (nbr < 0)
	{
		flg = -1;
	}
	print_nbr(nbr, flg, size, base);
}
