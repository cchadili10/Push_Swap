/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:15:39 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/26 02:08:20 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	sort_link(t_node **a, t_node **b, int i)
 {
	t_node		*tump;
	t_node		*tump2;
	int			node_position;
	int			x;
	static int	status_of_index;
	
	tump2 = *b;
	tump = *a;
	x = i/2;
	node_position = 0;
	if (*a == NULL || i == 1)
    {
        while (tump2)
        {
            pa(a,b);
            tump2 = tump2->next;
        }
		return;
    }
	while (tump)
	{
		if (tump->index == status_of_index)
		{
			if (node_position == 1)
				sa(a);
			else if (x >= node_position)
			{
				while (node_position)
				{
					ra(a);
					node_position--;
				}
			}
			else
			{
				while (node_position != i)
				{
					rra(a);
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
	pb(a,b);
	node_position = 0;
	sort_link(a, b, i-1);
}
