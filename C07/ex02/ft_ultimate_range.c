/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 20:40:54 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/15 20:40:54 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *list;
	int size;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int*)malloc(sizeof(int) * (size));
	if (!*range)
		return (-1);
	list = *range;
	while (min < max)
	{
		*list = min;
		++list;
		++min;
	}
	return (size);
}
