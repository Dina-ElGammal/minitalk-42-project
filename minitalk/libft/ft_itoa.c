/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 07:39:07 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/08 07:43:42 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	no_len(int no)
{
	int	ret;

	ret = 0;
	if (no <= 0)
		ret = 1;
	while (no != 0)
	{
		no = no / 10;
		ret++;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	postive_num;

	len = no_len(n);
	postive_num = n;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (n < 0)
		postive_num = -1 * n;
	while (len >= 0)
	{
		str[len] = postive_num % 10 + '0';
		postive_num = postive_num / 10;
		len--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
