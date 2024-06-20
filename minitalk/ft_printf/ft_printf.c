/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 08:07:56 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/22 08:30:09 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (specifier == 'i' || specifier == 'd')
		count += ft_print_int(va_arg(ap, int), 0);
	else if (specifier == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (specifier == 'x')
		count += ft_print_hexa(va_arg(ap, unsigned int), 0);
	else if (specifier == 'X')
		count += ft_print_hexa(va_arg(ap, unsigned int), 1);
	else if (specifier == 'p')
		count += ft_print_ptr(va_arg(ap, void *));
	else if (specifier == 'u')
		count += ft_print_unsigned_num(va_arg(ap, unsigned int));
	else if (specifier == '%')
	{
		count += write(1, "%", 1);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += ft_conversion(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
