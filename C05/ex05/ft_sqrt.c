/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 18:48:26 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/14 18:59:32 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int num;

	if (nb <= 0)
		return (0);
	num = 0;
	while (num * num < nb && num < 46341)
	{
		++num;
	}
	if (num * num == nb)
		return (num);
	return (0);
}
