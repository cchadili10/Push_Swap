/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 00:08:28 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 02:00:13 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	x;
	unsigned char	*p;

	p = (unsigned char *) str;
	x = 0;
	while (x < n)
	{
		p[x] = c;
		x++;
	}
	return (p);
}

size_t	ft_strlen(const char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*array;

	if ((int)count >= 0 && (int)size >= 0)
	{
		array = malloc(count * size);
		if (!array)
			return (0);
		ft_memset(array, 0, (count * size));
		return (array);
	}
	return (0);
}
