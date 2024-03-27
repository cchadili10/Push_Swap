/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_into_chunk.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:50:34 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 02:44:52 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_for_norm(t_node **a, t_node **b, int conter, int *rot_bot)
{
	while (conter)
	{
		if (*rot_bot == 1)
		{
			*rot_bot = 0;
			rr(a, b);
		}
		else
			ra(a);
		conter--;
	}
}

void	move_to_stack(t_node **a, t_node **b, int pivot, int is_first)
{
	t_node	*tump;
	int		conter;
	int		rot_bot;
	int		chek;

	tump = *a;
	((1) && (conter = 0, rot_bot = 0, chek = 0));
	while (tump)
	{
		if (pivot >= tump->index)
		{
			ft_for_norm(a, b, conter, &rot_bot);
			if (rot_bot)
				((1) && (rb(b), rot_bot = 0));
			pb(a, b);
			if (tump->index <= (pivot - (is_first / 2)) && (*b)->next)
				rot_bot = 1;
			chek = 1;
		}
		conter++;
		tump = tump->next;
		if (chek == 1)
			((1) && (tump = *a, conter = 0, chek = 0));
	}
}

void	split_into_chunks(t_node **a, t_node **b, int i)
{
	t_node		*tump;
	static int	is_first;
	int			pivot;

	tump = *a;
	if (*a == NULL)
		return ;
	if (i > 100 && is_first == 0)
	{
		pivot = i / 9;
		is_first = pivot;
	}
	else if (is_first == 0)
	{
		pivot = i / 5;
		is_first = pivot;
	}
	move_to_stack(a, b, pivot, is_first);
	split_into_chunks(a, b, (pivot + is_first));
}
