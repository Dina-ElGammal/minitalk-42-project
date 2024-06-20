/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:31:00 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/12 09:37:40 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*retptr;

	retptr = dst;
	if (!dst && !src)
		return (dst);
	while (n--)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
	}
	return (retptr);
}

// //This function take a copy from source to destination
// // data may be lost during overlap problem
// //n is the number of bytes to copy
