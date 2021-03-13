/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:40:31 by minjunki          #+#    #+#             */
/*   Updated: 2021/02/24 12:41:22 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int temp;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size - a - 1)
		{
			if (*(tab + b) > *(tab + b + 1))
			{
				temp = *(tab + b);
				*(tab + b) = *(tab + b + 1);
				*(tab + b + 1) = temp;
			}
			++b;
		}
		++a;
	}
}
