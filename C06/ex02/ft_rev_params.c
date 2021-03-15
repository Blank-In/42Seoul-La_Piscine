/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:22:39 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/14 20:24:10 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *args[])
{
	while (--argc > 0)
	{
		while (*args[argc])
		{
			write(1, args[argc], 1);
			++args[argc];
		}
		write(1, "\n", 1);
	}
	return (0);
}
