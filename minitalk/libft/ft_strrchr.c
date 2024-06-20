/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:36:29 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/08 07:53:17 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*ret;

	ret = NULL;
	if ((char)c == '\0')
	{
		len = ft_strlen(s);
		return ((char *)(s + len));
	}
	while (*s)
	{
		if (*s == (char)c)
			ret = (char *)s;
		s++;
	}
	return (ret);
}

// int main(void)
// {
// 	printf("%s", ft_strrchr("dina",'a'));
// 	return (0);
// }
// // function locates the last occurrence of c