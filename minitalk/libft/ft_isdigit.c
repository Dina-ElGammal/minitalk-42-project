/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:11:33 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/03 07:42:27 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int argv)
{
	if (argv <= '9' && argv >= '0')
		return (1);
	else
		return (0);
}
	//The is digit function used to check if the input numeric(0) or not(1)

// int	main(void)
// {
// 	printf ("%d", ft_isdigit('5'));
// 	printf ("\n%d", ft_isdigit('a'));
// 	return (0);
// }
