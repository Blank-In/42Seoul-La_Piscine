/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 18:12:43 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/12 01:42:44 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int cnt;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		cnt = 0;
		while (str[cnt] == to_find[cnt] && to_find[cnt])
		{
			++cnt;
		}
		if (to_find[cnt] == 0)
		{
			return (str);
		}
		++str;
	}
	return (0);
}
