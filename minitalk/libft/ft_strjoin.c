/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:02:23 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/14 08:02:20 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*newstr;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	if (!s1 && !s2)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * total_len + 1);
	if (!newstr)
		return (NULL);
	while (*s1 != '\0')
		newstr[i++] = *s1++;
	while (*s2 != '\0')
	{
		newstr[i++] = *s2++;
	}
	newstr[i] = '\0';
	return (newstr);
}
