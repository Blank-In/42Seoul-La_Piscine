/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:51:27 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/08 17:53:36 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_space(int cnt)
{
	int		space;

	space = 0;
	while (space < 17 - cnt)
	{
		write(1, "  ", 2);
		if (space % 2 == 0)
		{
			write(1, " ", 1);
		}
		++space;
	}
}

void	ft_x(char *a, int cnt, char *list)
{
	unsigned char back;
	unsigned char front;

	if ((unsigned char)*a > 31 && (unsigned char)*a < 127)
	{
		list[cnt - 1] = (unsigned char)*a;
	}
	else
	{
		list[cnt - 1] = '.';
	}
	back = (unsigned char)*a % 16;
	front = (unsigned char)*a / 16;
	if (front > 9)
		ft_putchar('a' + (front - 10));
	else
		ft_putchar('0' + front);
	if (back > 9)
		ft_putchar('a' + (back - 10));
	else
		ft_putchar('0' + back);
}

void	ft_print_addr(void *addr)
{
	unsigned char		list[17];
	unsigned long long	add;
	int					cnt;

	cnt = 16;
	add = (unsigned long long)addr;
	while (--cnt >= 0)
	{
		list[cnt] = add % 16;
		add /= 16;
		if (list[cnt] > 9)
			list[cnt] = 'a' + (list[cnt] - 10);
		else
			list[cnt] = '0' + list[cnt];
	}
	write(1, list, 16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		cnt;
	char	list[17];

	while (size > 0)
	{
		cnt = 0;
		ft_print_addr(addr);
		write(1, ": ", 2);
		while (cnt++ < 16 && size > 0)
		{
			ft_x((char *)addr, cnt, list);
			if (cnt % 2 == 0)
				write(1, " ", 1);
			++addr;
			--size;
		}
		ft_space(cnt);
		write(1, list, cnt - 1);
		write(1, "\n", 1);
	}
	return (addr);
}
