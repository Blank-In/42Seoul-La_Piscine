/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:35:41 by minjunki          #+#    #+#             */
/*   Updated: 2021/02/22 14:35:43 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putlist(int size, char list[])
{
	int a;

	a = 0;
	while (a < size)
	{
		write(1, &list[a], 1);
		++a;
	}
}

void	check_size(int size, char list[])
{
	int sum;
	int a;
	int b;

	a = 0;
	b = 9;
	sum = 0;
	while (a < size)
	{
		sum += list[a] - '0';
		++a;
	}
	while (a > 0)
	{
		sum -= b;
		--b;
		--a;
	}
	if (sum != 0)
	{
		write(1, ", ", 2);
	}
}

void	ft_size(int size, int now, int cnt, char list[])
{
	if (size == now)
	{
		ft_putlist(size, list);
		check_size(size, list);
		return ;
	}
	while (cnt <= 10 - size + now)
	{
		list[now] = '0' + cnt;
		ft_size(size, now + 1, cnt + 1, list);
		++cnt;
	}
}

void	ft_print_combn(int n)
{
	char list[n];

	ft_size(n, 0, 0, list);
}
