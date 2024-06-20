/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:29:38 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/19 12:29:44 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *s)
{
	int		count;

	count = 0;
	if (!s)
	{
		count += write(1, "(null)", 6);
	}
	else if (s)
	{
		while (*s)
		{
			count += write(1, s, 1);
			s++;
		}
	}
	return (count);
}
