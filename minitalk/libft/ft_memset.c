/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:10:38 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/03 07:43:08 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*temp;

	i = 0;
	temp = (unsigned char *) str;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}
// int main(void)
// {
//     char arr[7];
//     // print any character in array randomly
//     printf("print what is store in index 4 :%c" , arr[4]);
//     printf("***** \nAfter using ft_memset function*****");
//     ft_memset(arr, '0', sizeof(arr));
//     printf("a = %s\n", arr);
//     return (0);

// }
/* if you declare an array of char
without intialize it
like char a[5] 5 bytes will be reserved 
in memory but there is a chance that 
locations contains old values 
for example:
#include <stdio.h>
int main(void)
{
	char a[6];
	printf("%c",a[3]);
	return (0);
}
so using memset function allow you to have 
the full control of your memory
by set this memory with '\0' or any
given value.
*/
