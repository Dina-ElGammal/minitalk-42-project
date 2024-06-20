/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:56:01 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/19 11:17:29 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(long num, int i)
{
	int		count;
	char	*numslist;

	numslist = "0123456789";
	count = 0;
	if (num < 0 && i == 0)
	{
		count += write(1, "-", 1);
		num = num * -1;
	}
	i = 1;
	if (num <= 9)
	{
		count += write(1, &numslist[num], i);
	}
	else
	{
		count += ft_print_int((num / 10), i);
		count += ft_print_int((num % 10), i);
	}
	return (count);
}
