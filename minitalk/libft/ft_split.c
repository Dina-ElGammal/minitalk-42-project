/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delgamma <delgamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:47:35 by delgamma          #+#    #+#             */
/*   Updated: 2024/01/14 08:10:38 by delgamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char const *str, char c)
{
	size_t	words_num;
	size_t	i;

	words_num = 0;
	i = 0;
	if (!*str)
		return (0);
	while (i < ft_strlen(str))
	{
		if (str[i] != c)
		{
			words_num = words_num + 1;
			while (str[i] != c && str[i])
				i = i + 1;
		}
		else
		{
			i = i + 1;
		}
	}
	return (words_num);
}

void	free_memory(size_t k, char **ptr_list)
{
	while (k > 0)
	{
		k--;
		free(*(ptr_list + k));
	}
	free(ptr_list);
}

size_t	get_word_len(char const *s, char c)
{
	size_t	word_len_ret;

	word_len_ret = 0;
	if (!ft_strchr(s, c))
		word_len_ret = ft_strlen(s);
	else
		word_len_ret = ft_strchr(s, c) - s;
	return (word_len_ret);
}

char	**ft_splitstr(char const *s, char c, char **ptr_list)
{
	size_t	word_len;
	size_t	k;

	k = 0;
	word_len = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = get_word_len(s, c);
			ptr_list[k++] = ft_substr(s, 0, word_len);
			if (ptr_list[k - 1] == NULL)
			{
				free_memory(k - 1, ptr_list);
				return (NULL);
			}
			s += word_len;
		}
	}
	ptr_list[k] = NULL;
	return (ptr_list);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr_list;
	size_t	countwords;

	if (!s)
		return (NULL);
	countwords = ft_countwords(s, c);
	ptr_list = (char **)malloc(sizeof(char *) * (countwords + 1));
	if (!ptr_list)
		return (NULL);
	ptr_list = ft_splitstr(s, c, ptr_list);
	return (ptr_list);
}

// void	print_list(char **list)
// {
// 	int	i;

// 	i = 0;
// 	while (list[i])
// 	{
// 		printf("%s\n", list[i]);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char	*str;
// 	char	delimetter;
// 	char	**result;

// 	str = "xxxxxxxxhello!";
// 	delimetter = 'x';
// 	result = ft_split(str, delimetter);
// 	print_list(result);
// 	return (0);
// }
