/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:23:53 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 03:06:42 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_node **a)
{
	t_node	*temp;
	t_node	*temp1;
	t_node	*last_node;

	temp = *a;
	temp1 = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	insert_end(&temp1, temp->data, temp->index);
	temp1->next = *a;
	*a = temp1;
	temp = *a;
	while (temp->next->next != NULL)
		temp = temp->next;
	last_node = temp->next;
	temp->next = NULL;
	free(last_node);
	write(1, "rra\n", 4);
}

void	rrb(t_node **b)
{
	t_node	*temp;
	t_node	*temp1;
	t_node	*last_node;

	temp = *b;
	temp1 = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	insert_end(&temp1, temp->data, temp->index);
	temp1->next = *b;
	*b = temp1;
	temp = *b;
	while (temp->next->next != NULL)
		temp = temp->next;
	last_node = temp->next;
	temp->next = NULL;
	free(last_node);
	write(1, "rrb\n", 4);
}

void	rrx(t_node **b)
{
	t_node	*temp;
	t_node	*temp1;
	t_node	*last_node;

	temp = *b;
	temp1 = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	insert_end(&temp1, temp->data, temp->index);
	temp1->next = *b;
	*b = temp1;
	temp = *b;
	while (temp->next->next != NULL)
		temp = temp->next;
	last_node = temp->next;
	temp->next = NULL;
	free(last_node);
}

void	rrr(t_node **a, t_node **b)
{
	rrx(a);
	rrx(b);
	write(1, "rrr\n", 4);
}
