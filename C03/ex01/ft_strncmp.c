/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjunki <minjunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:45:24 by minjunki          #+#    #+#             */
/*   Updated: 2021/03/12 01:22:01 by minjunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int cnt;

	cnt = 0;
	while (cnt < n && (s1[cnt] || s2[cnt]))
	{
		if (s1[cnt] != s2[cnt])
		{
			return (s1[cnt] - s2[cnt]);
		}
		++cnt;
	}
	return (0);
}
