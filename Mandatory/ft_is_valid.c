/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:50:56 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 01:59:38 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *s)
{
	int	x;

	x = 0;
	if ((s[x] != '+' && s[x] != '-') && (s[x] < 48 || s[x] > 57))
		return (1);
	x++;
	while (s[x])
	{
		if (s[x] < 48 || s[x] > 57)
			return (1);
		x++;
	}
	return (0);
}

int	ft_repeted_number(t_node *a, int i)
{
	t_node		*tmp;
	static int	x;
	int			ckeck;

	tmp = a;
	ckeck = 0;
	if (i == 0)
		return (1);
	while (tmp)
	{
		if (tmp->index == x)
		{
			ckeck = 1;
			break ;
		}
		tmp = tmp->next;
	}
	x++;
	if (ckeck == 1)
		return (ft_repeted_number(a, (i - 1)));
	return (0);
}

int	is_lost_sort(t_node *node, int size)
{
	int		x;
	t_node	*tmp;

	tmp = node;
	x = 0;
	while (size)
	{
		if (tmp->index != x)
			return (0);
		tmp = tmp->next;
		size--;
		x++;
	}
	return (1);
}
