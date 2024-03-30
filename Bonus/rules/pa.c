/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:51:28 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/30 18:15:44 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	pb(t_node **a, t_node **b)
{
	t_node	*temp;
	t_node	*tempx;

	if (!(*a))
		return ;
	tempx = (*a)->next;
	temp = NULL;
	insert_end(&temp, (*a)->data, (*a)->index);
	free(*a);
	temp->next = *b;
	*b = temp;
	*a = tempx;
}

void	pa(t_node **a, t_node **b)
{
	t_node	*temp;
	t_node	*tempx;

	if (!(*b))
		return ;
	tempx = (*b)->next;
	temp = NULL;
	insert_end(&temp, (*b)->data, (*b)->index);
	free(*b);
	temp->next = *a;
	*a = temp;
	*b = tempx;
}
