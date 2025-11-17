/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarjan <amarjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:20:53 by amarjan           #+#    #+#             */
/*   Updated: 2025/11/02 17:49:44 by amarjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	result = malloc((end - start + 1) + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, &s1[start], (end - start + 1) + 1);
	return (result);
}
