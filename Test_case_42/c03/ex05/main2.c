/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:39:57 by shpark            #+#    #+#             */
/*   Updated: 2021/03/09 20:43:18 by eujeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlcat.c"

int				main(void)
{
	char	*str_base;
	char	*str_base1;
	char	dest1[100];
	char	dest2[100];
	char	dest3[100];
	char	dest4[100];
	char	dest5[100];
	char	dest6[100];
	char	dest7[100];
	char	dest8[100];
	char	dest9[99999];
	char	dest10[99999];
	char	*src;
	int		index;

	str_base = "Hello";
	str_base1 = "";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest1[index] = str_base[index];
		dest2[index] = str_base[index];
		dest3[index] = str_base[index];
		dest4[index] = str_base[index];
		dest5[index] = str_base[index];
		dest6[index] = str_base[index];
		dest7[index] = str_base[index];
		dest8[index] = str_base[index];
		dest9[index] = str_base1[index];
		dest10[index] = str_base1[index];
		index++;
	}
	printf("c  : (%lu) $%s$\n", strlcat(dest1, src, 0), dest1);
	printf("ft : (%d) $%s$\n", ft_strlcat(dest2, src, 0), dest2);
	printf("c  : (%lu) $%s$\n", strlcat(dest3, src, 3), dest3);
	printf("ft : (%d) $%s$\n", ft_strlcat(dest4, src, 3), dest4);
	printf("c  : (%lu) $%s$\n", strlcat(dest5, src, 100), dest5);
	printf("ft : (%d) $%s$\n", ft_strlcat(dest6, src, 100), dest6);
	printf("c  : (%lu) $%s$\n", strlcat(dest7, src, 8), dest7);
	printf("ft : (%d) $%s$\n", ft_strlcat(dest8, src, 8), dest8);
	printf("c  : (%lu) $%s$\n", strlcat(dest9, src, 10), dest9);
	printf("ft : (%d) $%s$\n", ft_strlcat(dest10, src, 10), dest10);
}
