/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:02:58 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 01:53:58 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_for_norm(t_node **b, int *node_position, int i)
{
	while (*node_position != i)
	{
		rrb(b);
		*node_position += 1;
	}
	*node_position = 0;
}

void	move_to_stack(t_node **b, int status_of_index, int i, int x)
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
					rb(b);
			}
			else
				ft_for_norm(b, &node_position, i);
			break ;
		}
		node_position++;
		tmp = tmp->next;
	}
}

void	sort_ink(t_node **a, t_node **b, int i)
{
	t_node		*tump;
	static int	status_of_index;
	int			x;

	tump = *b;
	x = i / 2;
	if (*b == NULL)
		return ;
	status_of_index++;
	pa(a, b);
	sort_ink(a, b, (i - 1));
}
