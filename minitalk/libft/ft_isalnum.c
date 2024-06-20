/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:24:57 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/03 07:42:08 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int argv)
{
	return (ft_isalpha(argv) || ft_isdigit(argv));
}
// int main (void)
// {
//     printf("%d",ft_isalnum('4'));
//     printf("\n%d", ft_isalnum('a'));
//     printf("\n%d", ft_isalnum('&'));
//     return (0);
// }

//This function check if the input is numeric or char ( return 1)
// otherwise it returns 0