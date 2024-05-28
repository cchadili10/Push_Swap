/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:15:39 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/28 16:00:14 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_for_norm(t_node **a, t_node **b, int *node_position, int i)
{
	while (*node_position != i)
	{
		rra(a, b);
		*node_position += 1;
	}
	*node_position = 0;
}

void	move_stack(t_node **a, t_node **b, int i, int x)
{
	t_node		*tmp;
	int			node_position;
	static int	status_of_index;

	tmp = *a;
	node_position = 0;
	while (tmp)
	{
		if (tmp->index == status_of_index)
		{
			if (node_position == 1)
				sa(a);
			else if (x >= node_position)
			{
				while (node_position--)
					ra(a, b);
			}
			else
				ft_for_norm(a, b, &node_position, i);
			break ;
		}
		node_position++;
		tmp = tmp->next;
	}
	status_of_index++;
}

void	sort_link(t_node **a, t_node **b, int i)
{
	t_node		*tump;
	t_node		*tump2;
	int			x;

	tump2 = *b;
	tump = *a;
	x = i / 2;
	if (*a == NULL || i == 1)
	{
		while (tump2)
		{
			pa(a, b);
			tump2 = tump2->next;
		}
		return ;
	}
	move_stack(a, b, i, x);
	pb(a, b);
	sort_link(a, b, (i - 1));
}
