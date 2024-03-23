/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 09:15:39 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/23 09:48:31 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void sort_link(t_node **a, t_node **b, int i)
 {
	t_node *tump = *a;
	t_node *tump2 = *b;
	static int status_of_index = 0;
	int node_position = 0;
	int x = i/2;
	if(*a == NULL || i == 1)
    {
        while (tump2)
        {
            pa(b,a);
            printf("pa\n");
            tump2 = tump2->next;
        }
		return;
    }
	while (tump)
	{
		if (tump->index == status_of_index)
		{
			if(node_position == 1)
			{
				sa(a);
				printf("sa\n");
			}
			else if(x >= node_position)
			{
				while (node_position)
				{
					ra(a);
					printf("ra\n");
					node_position--;
				}
			}
			else
			{
				while (node_position != i)
				{
					rra(a);
					printf("rra\n");
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
	pa(a,b);
	printf("pb\n");
	node_position = 0;
	sort_link(a, b, i-1);
}