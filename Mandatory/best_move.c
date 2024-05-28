/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:02:58 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/27 23:55:38 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_for_norml(t_node **b, t_node **a, int *node_position, int i)
{
	while (*node_position != i)
	{
		rrb(b, a);
		*node_position += 1;
	}
	*node_position = 0;
}

void	move_to_stackl(t_node **b, t_node **a, int i, int x)
{
	t_node	*tmp;
	int		node_position;

	tmp = *b;
	node_position = 0;
	while (tmp)
	{
		if (tmp->index == (i - 1))
		{
			if (node_position == 1)
				sb(b);
			else if (x >= node_position)
			{
				while (node_position--)
					rb(b, a);
			}
			else
				ft_for_norml(b, a, &node_position, i);
			break ;
		}
		node_position++;
		tmp = tmp->next;
	}
}

void	sort_inkl(t_node **a, t_node **b, int i)
{
	t_node		*tump;
	int			x;

	tump = *b;
	x = i / 2;
	if (*b == NULL)
		return ;
	move_to_stackl(b, a, i, x);
	pa(a, b);
	sort_inkl(a, b, (i - 1));
}
