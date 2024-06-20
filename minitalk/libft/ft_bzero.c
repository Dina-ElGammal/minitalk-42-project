/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:40:05 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/03 07:41:53 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t		i;
	char		*temp;

	i = 0;
	temp = (char *) str;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}

// // set reserved memory by zero.
// int	main(void)
// {
// 	char	arr[7];
// 	// print any character in array randomly
// 	printf("print what is store in index 4 :%c", arr[4]);
// 	printf("\n\nAfter using ft_bzero function*****");
// 	ft_bzero(arr, sizeof(arr));
// 	printf("\n a = %s", arr);
// 	return (0);
// }
