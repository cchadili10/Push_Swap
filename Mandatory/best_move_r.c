/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:15:39 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 01:57:01 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_for_norm(t_node **a, int *node_position, int i)
{
	while (*node_position != i)
	{
		rra(a);
		*node_position += 1;
	}
	*node_position = 0;
}

void	move_to_stack(t_node **a, int status_of_index, int i, int x)
{
	t_node	*tmp;
	int		node_position;

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
					ra(a);
			}
			else
				ft_for_norm(a, &node_position, i);
			break ;
		}
		node_position++;
		tmp = tmp->next;
	}
}

void	sort_link(t_node **a, t_node **b, int i)
{
	t_node		*tump;
	t_node		*tump2;
	int			x;
	static int	status_of_index;

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
	move_to_stack(a, status_of_index, i, x);
	status_of_index++;
	pb(a, b);
	sort_link(a, b, (i - 1));
}
