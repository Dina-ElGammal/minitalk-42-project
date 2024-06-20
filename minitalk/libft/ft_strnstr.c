/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:01:09 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/14 07:54:45 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!haystack && !len)
		return (NULL);
	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
// int main(void)
// {
// 	printf("%s", ft_strnstr("Hello World", "Worfldf" ,11));
// 	return(0);
// }
// //locate a substring in string
// //return null if haystack == NULL and n==0
// // if needle is null return haystack
// // example: haystack =hello! and needle=llox
// //return null
// //if needle=llo and haystack=hello! it returns hello!