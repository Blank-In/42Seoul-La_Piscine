/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:53:37 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/13 13:08:53 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space(char a)
{
	if (a == ' ' || a == '\f' || a == '\n')
		return (1);
	if (a == '\r' || a == '\t' || a == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int num;
	int flg;

	num = 0;
	flg = 1;
	while (space(*str))
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			flg *= -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += ((*str - '0') * flg);
		++str;
	}
	return (num);
}
