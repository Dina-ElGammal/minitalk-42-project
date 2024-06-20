/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:56:23 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/03 07:42:16 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 'a' && a <= 'z' ) || (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}

// int main()
// {
// 	printf("%d",ft_isalpha('a'));
// 	printf("\n%d",ft_isalpha('^'));
// }
