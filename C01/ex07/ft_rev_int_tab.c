/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 12:19:12 by minjunki          #+#    #+#             */
/*   Updated: 2021/02/24 12:23:27 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int now;
	int temp;

	now = 0;
	while (now < --size)
	{
		temp = tab[now];
		tab[now] = tab[size];
		tab[size] = temp;
		++now;
	}
}
