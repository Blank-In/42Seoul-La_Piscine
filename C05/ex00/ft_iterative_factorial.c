/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:42:20 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/13 17:51:34 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int num;

	num = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		num *= nb--;
	}
	return (num);
}
