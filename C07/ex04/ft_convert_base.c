/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:38:43 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/17 18:38:44 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char c);
int		base_check(char *base);
int		ft_atoi(char *str, int size, int flg, char *base);

char	*print_nbr(int nbr, int size, char *base)
{
	int		cnt;
	int		flg;
	char	*list;

	cnt = 0;
	flg = 1;
	if (nbr < 0)
		flg = -1;
	list = malloc(sizeof(char) * 50);
	while (nbr != 0)
	{
		list[cnt++] = base[(nbr % size) * flg];
		nbr /= size;
	}
	if (flg == -1)
	{
		list[cnt++] = '-';
	}
	list[cnt] = 0;
	return (list);
}

char	*ft_putnbr_base(int nbr, char *base, int size)
{
	char	*origin;
	char	*answer;

	if (nbr == 0)
	{
		answer = malloc(sizeof(char) * 2);
		answer[0] = base[0];
		answer[1] = 0;
		return (answer);
	}
	origin = print_nbr(nbr, size, base);
	size = 0;
	nbr = 0;
	while (origin[size])
	{
		++size;
	}
	answer = malloc(sizeof(char) * (size + 1));
	while (--size >= 0)
	{
		answer[nbr++] = origin[size];
	}
	answer[nbr] = 0;
	free(origin);
	return (answer);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	change;
	int	from_size;
	int	to_size;
	int	flg;

	from_size = base_check(base_from);
	to_size = base_check(base_to);
	if (from_size == 0 || to_size == 0)
		return (NULL);
	while (is_space(*nbr))
	{
		++nbr;
	}
	flg = 1;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			flg *= -1;
		++nbr;
	}
	change = ft_atoi(nbr, from_size, flg, base_from);
	return (ft_putnbr_base(change, base_to, to_size));
}
