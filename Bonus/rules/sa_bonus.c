/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:27:50 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/28 00:36:16 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	sa(t_node **a)
{
	t_node	*tump;

	if (!a || !(*a) || !(*a)->next)
		return ;
	tump = *a;
	*a = tump->next;
	tump->next = tump->next->next;
	(*a)->next = tump;
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
}

void	ss(t_node **a, t_node **b)
{
	sa(a);
	sb(b);
}
