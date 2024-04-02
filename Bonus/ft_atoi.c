/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 01:37:40 by hchadili          #+#    #+#             */
/*   Updated: 2024/04/02 00:37:23 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

long	ft_atoi(const char *str, t_node *a)
{
	int					x;
	int					sin;
	unsigned long long	res;

	((1) && (x = 0, sin = 1, res = 0));
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	if (str[x] == '-' || str[x] == '+' )
	{
		if (str[x] == '-')
			sin *= -1;
		x++;
	}
	if (str[x] < '0' || str[x] > '9')
		ft_error("Error", a);
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = res * 10 + str[x++] - 48;
		if (res > LONG_MAX && sin == 1)
			ft_error("Error", a);
		else if (res > LONG_MAX && sin == -1)
			ft_error("Error", a);
	}
	return (res * sin);
}
