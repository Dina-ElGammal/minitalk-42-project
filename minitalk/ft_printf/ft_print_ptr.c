/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:49:35 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/19 10:52:04 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 0;
	count += write(1, "0x", 2);
	address = (unsigned long)ptr;
	count += ft_print_hexa(address, 0);
	return (count);
}
