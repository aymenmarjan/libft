/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarjan <amarjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:20:40 by amarjan           #+#    #+#             */
/*   Updated: 2025/11/02 17:49:40 by amarjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		i_tmp;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		i_tmp = i;
		while (big[i] == little[j] && big[i] && little[j] && i < len)
		{
			i++;
			j++;
		}
		i = i_tmp;
		if (j == ft_strlen(little))
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
