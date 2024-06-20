/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:21:56 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/03 10:41:42 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	ret;

	i = 0;
	ret = 0;
	ret = ft_strlen(src);
	if (size == 0)
	{
		return (ret);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ret);
}
// int main (void)
// {
// 	char src[9] = "ABCDEFGHI";
// 	char dst[3] = "XYZ";
// 	printf("%d",(int)ft_strlcpy(dst,src,3));
// 	return (0);
// }
// safe copy
// make copy of str from src to destination
// return the length of src
