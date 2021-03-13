/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:09:32 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/08 17:10:56 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_word(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	if (a >= '0' && a <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*origin;
	int		flg;

	origin = str;
	flg = 1;
	while (*str != 0)
	{
		if (is_word(*str) == 1)
		{
			if (flg == 1 && *str >= 'a' && *str <= 'z')
			{
				*str -= 32;
			}
			else if (flg == 0 && *str >= 'A' && *str <= 'Z')
			{
				*str += 32;
			}
			flg = 0;
		}
		else
			flg = 1;
		++str;
	}
	return (origin);
}
