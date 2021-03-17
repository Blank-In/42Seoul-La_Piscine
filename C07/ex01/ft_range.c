/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 22:36:26 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/16 22:37:24 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *list;
	int cnt;

	list = 0;
	if (min >= max)
		return (0);
	if (!(list = malloc(sizeof(int) * (max - min))))
		return (0);
	cnt = 0;
	while (min < max)
	{
		list[cnt++] = min++;
	}
	return (list);
}
