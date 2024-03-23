/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_into_chunk.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:50:34 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/23 09:32:36 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void split_into_chunks(t_node **a, t_node **b, int i)
{
	t_node *tump = *a;
	static int is_first;
	int rot_bot = 0;
	int chek = 0;
	int pivot = i;
	int conter = 0;
	if(*a == NULL)
		return;
	if(i > 100 && is_first == 0)
	{
		pivot = i / 9;
		is_first = pivot;
	}	
	else if (is_first == 0)
	{
		pivot = i / 5;
		is_first = pivot;
	}
	while (tump)
	{
		if(pivot >= tump->index)
		{
			while (conter)
			{
				if(rot_bot)
				{
					rr(a,b);
					printf("rr\n");
					rot_bot = 0;
				}
				else
				{
					ra(a);
					printf("ra\n");
				}
				conter--;
			}
			if(rot_bot)
			{
				ra(b);
				printf("rb\n");
				rot_bot = 0;
			}
			pa(a,b);
			printf("pb\n");
			if(tump->index <= (pivot - (is_first / 2)) && (*b)->next)
				rot_bot = 1;
			chek = 1;
		}
		conter++;
		tump = tump->next;
		if(chek == 1)
		{
			tump = *a;
			conter = 0;
			chek = 0;
		}
	}
	split_into_chunks(a,b,(pivot + is_first));
}