/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:02:39 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/13 16:03:16 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	if (c == '\v' || c == '\f' || c == 'r')
		return (1);
	return (0);
}

int	base_check(char *base)
{
	int cnt;
	int temp;

	cnt = 0;
	if (*base == 0 || base[1] == 0)
		return (0);
	while (base[cnt])
	{
		if (base[cnt] == '+' || base[cnt] == '-' || is_space(base[cnt]))
			return (0);
		temp = cnt + 1;
		while (base[temp])
		{
			if (base[cnt] == base[temp])
				return (0);
			++temp;
		}
		++cnt;
	}
	return (cnt);
}

int	ft_atoi(char *str, int size, int flg, char *base)
{
	int num;
	int index;

	num = 0;
	while (*str)
	{
		index = 0;
		while (base[index])
		{
			if (*str == base[index])
				break ;
			++index;
		}
		if (index == size)
			return (num);
		num *= size;
		num += index * flg;
		++str;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int size;
	int flg;

	size = base_check(base);
	flg = 1;
	if (size == 0)
		return (0);
	while (is_space(*str))
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			flg *= -1;
		++str;
	}
	return (ft_atoi(str, size, flg, base));
}
