/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 09:56:51 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/11 13:21:01 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ret;

	ret = (char *)s;
	while (*ret != (char)c)
	{
		if (!*ret)
			return (NULL);
		ret++;
	}
	return (ret);
}
// int main()
// {
//  printf("%s" , ft_strchr("xdinaxx",'x'));
//  return (0);
// }
// This function search for char and return string.
//example search for i in dina , it returns ina.
// If there is no string or char not found
// it returns NULL
