/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:11:09 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 02:39:55 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	y;
	char	*array;

	y = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (array = ft_calloc(1, 1));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	array = (char *) malloc((len) * sizeof(char) + 1);
	if (!array)
		return (0);
	while (len > y && s[y])
	{
		array[y] = s[start];
		start++;
		y++;
	}
	array[y] = '\0';
	return (array);
}

static int	ft_count_words(const char *s1, int c)
{
	int	x;
	int	check;
	int	res;

	x = 0;
	res = 0;
	check = 0;
	while (s1[x])
	{
		while (s1[x] != c && s1[x])
		{
			check = 1;
			x++;
		}
		if (check)
			res ++;
		check = 0;
		while (s1[x] == c && s1[x])
			x++;
	}
	return (res);
}

static char	**ft_fill(char **array, const char *s, char c, int count)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (count > x)
	{
		while (s[y] != c && s[y])
			y++;
		array[x] = ft_substr(s, 0, y);
		if (!array[x])
		{
			while (x--)
				free(array[x]);
			free(array);
			return (0);
		}
		while (s[y] == c && s[y])
			y++;
		s = s + y;
		y = 0;
		x++;
	}
	array[x] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		count;

	if (!s)
		return (0);
	count = ft_count_words(s, c);
	array = (char **) malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (0);
	while (*s == c && *s)
		s++;
	array = ft_fill(array, s, c, count);
	return (array);
}
