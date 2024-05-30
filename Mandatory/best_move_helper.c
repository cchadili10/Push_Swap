/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 01:12:22 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/30 01:41:51 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_for_norml(t_node **b, t_node **a, int node_position, int size)
{
	while (node_position < size)
	{
		rrb(b, a);
		node_position++;
	}
}

int	ft_get_max(t_node *node, int x)
{
	int	max;

	max = 0;
	if (x < 0)
		return (0);
	while (node)
	{
		if (x == node->index)
			break ;
		max++;
		node = node->next;
	}
	return (max);
}

int	ft_small_or_big(t_node *b, int small, int big)
{
	int	steps_big;
	int	steps_small;

	steps_big = 0;
	steps_small = 0;
	if (small >= (ft_sizeof_stack(b) / 2))
		steps_small = ft_sizeof_stack(b) - small;
	else
		steps_small = small;
	if (big >= (ft_sizeof_stack(b) / 2))
		steps_big = ft_sizeof_stack(b) - big;
	else
		steps_big = big;
	if (steps_big > steps_small)
		return (0);
	return (1);
}
