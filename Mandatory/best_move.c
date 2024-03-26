/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:02:58 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/26 03:28:42 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_ink(t_node **a, t_node **b, int i)
 {
	t_node		*tump;
	static int	status_of_index;
	int			node_position;
	int			x;

	tump = *b;
	x = i/2;
	node_position = 0;
	if(*b == NULL)
		return;
	while (tump)
	{
		if (tump->index == i-1)
		{
			if(node_position == 1)
			{
				sb(b);
			}
			else if(x >= node_position)
			{
				while (node_position)
				{
					rb(b);
					node_position--;
				}
			}
			else
			{
				while (node_position != i)
				{
					rrb(b);
					node_position++;
				}
				node_position = 0;
			}
			status_of_index++;
			break;
		}
		node_position++;
	   tump = tump->next;
	}
	pa(a, b);
	node_position = 0;
	sort_ink(a, b, i-1);
}
