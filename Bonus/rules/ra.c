/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:25:10 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/30 03:54:02 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ra(t_node **a)
{
	t_node	*temp;
	t_node	*temp1;

	if(!(*a) || !(*a)->next)
		return ;
	temp = (*a)->next;
	temp1 = NULL;
	insert_end(&temp1, (*a)->data, (*a)->index);
	free(*a);
	(*a) = temp;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = temp1;
}

void	rb(t_node **b)
{
	t_node	*temp;
	t_node	*temp1;

	if(!(*b) || !(*b)->next)
		return ;
	temp = (*b)->next;
	temp1 = NULL;
	insert_end(&temp1, (*b)->data, (*b)->index);
	free(*b);
	(*b) = temp;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = temp1;
}

void	rx(t_node **b)
{
	t_node	*temp;
	t_node	*temp1;

	if(!(*b) || !(*b)->next)
		return ;
	temp = (*b)->next;
	temp1 = NULL;
	insert_end(&temp1, (*b)->data, (*b)->index);
	free(*b);
	(*b) = temp;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = temp1;
}

void	rr(t_node **a, t_node **b)
{
	rx(a);
	rx(b);
}
