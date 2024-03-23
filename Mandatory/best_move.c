/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:02:58 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/23 08:38:42 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_ink(t_node **a, t_node **b, int i)
 {
	t_node *tump = *a;
	static int status_of_index = 0;
	int node_position = 0;
	int x = i/2;
	if(*a == NULL)
		return;
	while (tump)
	{
		if (tump->index == i-1)
		{
			if(node_position == 1)
			{
				sa(a);
				printf("sb\n");
			}
			else if(x >= node_position)
			{
				while (node_position)
				{
					ra(a);
					printf("rb\n");
					node_position--;
				}
			}
			else
			{
				while (node_position != i)
				{
					rra(a);
					printf("rrb\n");
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
	printf("pa\n");
	node_position = 0;
	sort_ink(a, b, i-1);
}