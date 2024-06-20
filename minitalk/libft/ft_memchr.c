/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:09:09 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/03 07:42:45 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((void *)(unsigned char *)s);
		}
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s",memchr("strkll",'t',3));
// 	printf("\n%s",ft_memchr("strkll",'t',3));
// 	return (0);
// }

//This function works like strchr.
//Expet it has an addition paramter
// This parameter define at which index possition.
// you have to stop searching in the given str.
// ex : s="Dina", memchr(s,a,3)
// in this case it searches for a in 
// first three character and return Null
//ex: s="Hello World" memchr(s,o,6)
// this will return "o World"
//if string is empty it will return Null
// c int converted to unsigned char in string