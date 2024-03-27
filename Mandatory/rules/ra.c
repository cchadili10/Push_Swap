/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:25:10 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 23:23:41 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_node **a)
{
	t_node	*temp;
	t_node	*temp1;

	temp = (*a)->next;
	temp1 = NULL;
	insert_end(&temp1, (*a)->data, (*a)->index);
	free(*a);
	(*a) = temp;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = temp1;
	write(1, "ra\n", 3);
}

void	rb(t_node **b)
{
	t_node	*temp;
	t_node	*temp1;

	temp = (*b)->next;
	temp1 = NULL;
	insert_end(&temp1, (*b)->data, (*b)->index);
	free(*b);
	(*b) = temp;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = temp1;
	write(1, "rb\n", 3);
}

void	rx(t_node **b)
{
	t_node	*temp;
	t_node	*temp1;

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
	write(1, "rr\n", 3);
}
