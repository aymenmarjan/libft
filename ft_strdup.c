/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarjan <amarjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:20:16 by amarjan           #+#    #+#             */
/*   Updated: 2025/11/02 18:16:09 by amarjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	p = malloc(sizeof(char) * (s_len + 1));
	if (p == NULL)
		return (NULL);
	ft_strlcpy((char *)p, s, s_len + 1);
	return ((char *)p);
}
