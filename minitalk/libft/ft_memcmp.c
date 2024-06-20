/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:26:19 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/03 07:42:51 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}

// int main (void)
// {
//     printf("%d",memcmp("12","23",3));
// 	printf("\n%d",ft_memcmp("12","23",3));
// 	return(0);
// }
// it checks if two chunks of memory whether 
// or not equal to each other
// if equal returns 0
// if not equal returns the difference 
//between the first two differing bytes
//which is s1 -s2