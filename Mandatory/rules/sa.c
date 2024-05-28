/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:27:50 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/28 00:39:00 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_node **a)
{
	t_node	*tump;

	if (!a || !(*a) || !(*a)->next)
		return ;
	tump = *a;
	*a = tump->next;
	tump->next = tump->next->next;
	(*a)->next = tump;
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	t_node	*tump;

	if (!b || !(*b) || !(*b)->next)
		return ;
	tump = *b;
	*b = tump->next;
	tump->next = tump->next->next;
	(*b)->next = tump;
	write(1, "sb\n", 3);
}

void	sx(t_node **x)
{
	t_node	*tump;

	if (!x || !(*x) || !(*x)->next)
		return ;
	tump = *x;
	*x = tump->next;
	tump->next = tump->next->next;
	(*x)->next = tump;
}

void	ss(t_node **a, t_node **b)
{
	sx(a);
	sx(b);
	write(1, "ss\n", 3);
}
