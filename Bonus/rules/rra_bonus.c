/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:23:53 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/28 16:00:29 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rra(t_node **a, t_node **to_free)
{
	t_node	*temp;
	t_node	*temp1;
	t_node	*last_node;

	if (!(*a) || !(*a)->next)
		return ;
	temp = *a;
	temp1 = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	insert_end(&temp1, temp->data, temp->index);
	if (!temp1)
	{
		ft_free_stacka(*a);
		ft_free_stacka(*to_free);
		exit(2);
	}
	temp1->next = *a;
	*a = temp1;
	temp = *a;
	while (temp->next->next != NULL)
		temp = temp->next;
	last_node = temp->next;
	temp->next = NULL;
	free(last_node);
}

void	rrb(t_node **b, t_node **to_free)
{
	t_node	*temp;
	t_node	*temp1;
	t_node	*last_node;

	if (!(*b) || !(*b)->next)
		return ;
	temp = *b;
	temp1 = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	insert_end(&temp1, temp->data, temp->index);
	if (!temp1)
	{
		ft_free_stacka(*b);
		ft_free_stacka(*to_free);
		exit(2);
	}
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
	rra(a, b);
	rrb(b, a);
}
