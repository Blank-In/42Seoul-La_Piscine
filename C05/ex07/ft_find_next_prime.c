/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 19:11:13 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/14 19:13:50 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int num;

	if (nb < 2)
		return (0);
	num = 2;
	while (num <= nb / 2)
	{
		if (nb % num == 0)
			return (0);
		++num;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		++nb;
	}
	return (nb);
}
