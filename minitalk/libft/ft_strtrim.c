/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:48:57 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/14 07:57:47 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_front(char const *s, char const *set)
{
	size_t	start;

	start = 0;
	while (ft_strchr(set, s[start]))
		start = start + 1;
	return (start);
}

size_t	ft_rear(char const *s2, char const *set)
{
	size_t	end;

	end = ft_strlen(s2) - 1;
	while (ft_strchr(set, s2[end]) && end > 0)
		end = end - 1;
	return (end);
}

size_t	ft_length(size_t start, size_t end)
{
	size_t	strlen;

	if (end != 0)
		strlen = end - start + 2;
	else
		strlen = 1;
	return (strlen);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret_string;
	size_t	i;
	size_t	len;
	size_t	front;
	size_t	rear;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	front = ft_front(s1, set);
	rear = ft_rear(s1, set);
	len = ft_length(front, rear);
	ret_string = (char *)malloc(sizeof(char) * (len));
	if (!ret_string)
	{
		return (NULL);
	}
	while (front <= rear)
	{
		ret_string[i++] = s1[front++];
	}
	ret_string[i] = '\0';
	return (ret_string);
}
// int	main(void)
// {
// 	char *strtrim;
// 	char s1[] = "          ";
//     if (!(strtrim = ft_strtrim(s1, " ")))
//         printf("NULL");
//     else
//         printf("%s", strtrim);
//     if (strtrim == s1)
//         printf("\nA new string was not returned");
// 	// printf("%s", ft_strtrim(" lorem ipsum dolor sit amet", "l "));
// 	// printf("%s", ft_strtrim("   xxx   xxx", " x"));
// }
//