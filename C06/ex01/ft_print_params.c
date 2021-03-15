/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:19:03 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/14 20:21:39 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *args[])
{
	int cnt;

	cnt = 1;
	while (cnt < argc)
	{
		while (*args[cnt])
		{
			write(1, args[cnt], 1);
			++args[cnt];
		}
		write(1, "\n", 1);
		++cnt;
	}
	return (0);
}
