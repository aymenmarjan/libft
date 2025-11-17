/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarjan <amarjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:19:36 by amarjan           #+#    #+#             */
/*   Updated: 2025/11/02 17:48:46 by amarjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lencount(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_fill(unsigned int nb, char *str, int *i)
{
	if (nb > 9)
	{
		ft_fill(nb / 10, str, i);
		ft_fill(nb % 10, str, i);
	}
	else
	{
		str[*i] = nb + '0';
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	size_t			strlen;
	int				i;
	char			*str;
	unsigned int	nb;

	i = 0;
	strlen = ft_lencount(n);
	str = (char *)malloc((sizeof(char) * strlen) + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		nb = -n;
		i++;
	}
	else
		nb = n;
	ft_fill(nb, str, &i);
	str[strlen] = '\0';
	return (str);
}
