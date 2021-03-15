/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:11:54 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/14 20:16:31 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *args[])
{
	if (argc > 0)
	{
		while (*args[0])
		{
			write(1, args[0], 1);
			++args[0];
		}
	}
	write(1, "\n", 1);
	return (0);
}
