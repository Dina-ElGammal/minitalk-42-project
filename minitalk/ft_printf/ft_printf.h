/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:36:28 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/19 12:11:17 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_int(long num, int i);
int	ft_print_hexa(unsigned long num, int checkcase);
int	ft_print_ptr(void *ptr);
int	ft_print_unsigned_num(unsigned long num);
#endif
