/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarjan <amarjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:20:57 by amarjan           #+#    #+#             */
/*   Updated: 2025/11/02 18:30:26 by amarjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	remaining_length;
	size_t	alloc_value;
	char	*p;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	remaining_length = s_len - (&s[start] - &s[0]);
	if (remaining_length < len)
		alloc_value = remaining_length;
	else
		alloc_value = len;
	p = (char *)malloc(alloc_value * (sizeof(char)) + 1);
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s + start, alloc_value);
	p[alloc_value] = '\0';
	return (p);
}
