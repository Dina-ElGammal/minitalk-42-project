/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:52:39 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/19 11:25:26 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long num, int checkcase)
{
	int		count;
	char	*numslist;

	count = 0;
	numslist = "0123456789abcdef";
	if (checkcase == 1)
		numslist = "0123456789ABCDEF";
	if (num < 16)
	{
		count += write(1, &numslist[num], 1);
	}
	else
	{
		count += ft_print_hexa((num / 16), checkcase);
		count += ft_print_hexa((num % 16), checkcase);
	}
	return (count);
}
