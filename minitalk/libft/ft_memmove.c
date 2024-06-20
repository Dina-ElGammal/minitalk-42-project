/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 19:28:19 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/03 07:43:03 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*reptr;

	reptr = dst;
	if (!src && !dst)
		return (dst);
	else if (src == dst)
		return (dst);
	if (dst > src)
	{
		while (len--)
		{
			*(char *)(dst + len) = *(char *)(src + len);
		}
	}
	else
	{
		while (len--)
		{
			*(char *)dst = *(char *)src;
			dst++;
			src++;
		}
	}
	return (reptr);
}
// int main()
// {
// 	char src[9]="abcdefghi";
// 	char dst[3]="xyz";
// 	printf("%s" ,((char*)ft_memmove(dst,src,3)));
// 	return (0);
// }
// move bytes from dst to src