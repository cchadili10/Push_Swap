/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 01:37:40 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/29 17:55:55 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sizeof_stack(t_node *a)
{
	t_node	*tmp;
	int		x;

	tmp = a;
	x = 0;
	while (tmp)
	{
		x++;
		tmp = tmp->next;
	}
	return (x);
}

void	ft_free_arr(char **arr, int x)
{
	while (arr[x])
	{
		free(arr[x]);
		x++;
	}
	free(arr);
}

long	ft_atoi(const char *str, char **arr, t_node *a, int j)
{
	int					x;
	int					sin;
	unsigned long long	res;

	((1) && (x = 0, sin = 1, res = 0));
	if (str[x] == '-' || str[x] == '+' )
	{
		if (str[x] == '-')
			sin *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = res * 10 + str[x++] - 48;
		if (res > LONG_MAX)
		{
			ft_free_arr(arr, j);
			ft_error("Error", a);
		}
	}
	return (res * sin);
}
