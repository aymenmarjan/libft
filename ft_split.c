/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarjan <amarjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:20:09 by amarjan           #+#    #+#             */
/*   Updated: 2025/11/15 16:46:09 by amarjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcounter(char const *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static size_t	ft_len_until_char(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_extract_word(const char *s, char c)
{
	size_t	len;

	len = ft_len_until_char(s, c);
	return (ft_substr(s, 0, len));
}

static void	ft_free_all(size_t k, char **ptr)
{
	while (k > 0)
	{
		k--;
		free(ptr[k]);
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	k;

	if (!s)
		return (NULL);
	ptr = (char **)malloc((ft_wordcounter(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	k = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			ptr[k] = ft_extract_word(s, c);
			if (!ptr[k])
				return (ft_free_all(k, ptr), NULL);
			k++;
			while (*s && *s != c)
				s++;
		}
	}
	ptr[k] = NULL;
	return (ptr);
}
