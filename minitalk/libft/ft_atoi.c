/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 07:24:39 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/16 08:04:51 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned long long	result;
	int					sign;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\f' || *nptr == '\r'
		|| *nptr == '\n' || *nptr == '\v')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			sign = -1;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
		if (result > LLONG_MAX && sign == 1)
			return (-1);
		if (result > LLONG_MAX && sign == -1)
			return (0);
	}
	return ((long)(sign * result));
}

// #include <limits.h>

// int main(void)
// {

// 	printf("%lld\n", ft_atoi("00000000000007887878214748364899999999"));
// 	printf("org%lld\n",    atoi("00000000000007887878214748364899999999"));

// }