/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:56:36 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/03 07:42:33 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int argv)
{
	if ((argv >= '!' && argv <= '~') || (argv == ' '))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("Test #: %d", ft_isprint('#'));
// 	printf("\n Test $: %d", ft_isprint('$'));
// 	printf("\n Test 8:  %d", ft_isprint('8'));
// 	printf("\n Test R : %d ", ft_isprint('R'));
// 	printf("\n Test r : %d ", ft_isprint('r'));
// 	printf("\n Test R : %d ", ft_isprint('R'));
// 	printf("\nTest #: %d", ft_isprint('#'));
// 	printf("\n Test $: %d", ft_isprint('$'));
// 	printf("\n Test 8:  %d", ft_isprint('8'));
// 	printf("\n Test R : %d ", ft_isprint('R'));
// 	printf("\n Test r : %d ", ft_isprint('r'));
// 	printf("\n Test space: %d ", ft_isprint(' '));
// 	printf("check non printable  null char: %d", ft_isprint('\0'));
// }
//  This function used to check if input is number 
//or capital or small letters
//or special symbol starting from ! to ~ in ascii
// or space
