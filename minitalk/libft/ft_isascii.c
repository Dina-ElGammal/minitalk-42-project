/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:49:59 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/03 07:42:21 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int argv)
{
	if (argv >= 0 && argv <= 127)
		return (1);
	else
		return (0);
}

// int main()
// {
// 	int a = 9;
// 	printf("%d",ft_isascii('$'));
//     printf("\n%d",ft_isascii('a'));
//     return (0);
// }
// This function used to check if its 7 bits not 8 bites
