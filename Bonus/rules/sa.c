/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:27:50 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/28 00:22:45 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	sa(t_node **a)
{
	t_node	*tump;

	tump = *a;
	*a = tump->next;
	tump->next = tump->next->next;
	(*a)->next = tump;
	write(1, "sa\n", 3);
}

void	sb(t_node **b)
{
	t_node	*tump;

	tump = *b;
	*b = tump->next;
	tump->next = tump->next->next;
	(*b)->next = tump;
	write(1, "sb\n", 3);
}

void	sx(t_node **b)
{
	t_node	*tump;

	tump = *b;
	*b = tump->next;
	tump->next = tump->next->next;
	(*b)->next = tump;
}

void	ss(t_node **a, t_node **b)
{
	sx(a);
	sx(b);
	write(1, "ss\n", 3);
}
