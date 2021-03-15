/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:07:21 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/14 18:35:03 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int origin;

	origin = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
	{
		nb *= origin;
	}
	return (nb);
}
