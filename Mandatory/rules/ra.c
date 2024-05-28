/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:25:10 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/28 00:26:52 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_node **a, t_node **to_free)
{
	t_node	*temp;
	t_node	*temp1;

	if (!a || !(*a) || !(*a)->next)
		return ;
	temp = (*a)->next;
	temp1 = NULL;
	insert_end(&temp1, (*a)->data, (*a)->index);
	if (!temp1)
	{
		ft_free_stacka(*a);
		ft_free_stacka(*to_free);
		exit(2);
	}
	free(*a);
	(*a) = temp;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = temp1;
	write(1, "ra\n", 3);
}

void	rb(t_node **b, t_node **to_free)
{
	t_node	*temp;
	t_node	*temp1;

	if (!b || !(*b) || !(*b)->next)
		return ;
	temp = (*b)->next;
	temp1 = NULL;
	insert_end(&temp1, (*b)->data, (*b)->index);
	if (!temp1)
	{
		ft_free_stacka(*b);
		ft_free_stacka(*to_free);
		exit(2);
	}
	free(*b);
	(*b) = temp;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = temp1;
	write(1, "rb\n", 3);
}

void	rx(t_node **x, t_node **to_free)
{
	t_node	*temp;
	t_node	*temp1;

	temp = (*x)->next;
	temp1 = NULL;
	insert_end(&temp1, (*x)->data, (*x)->index);
	if (!temp1)
	{
		ft_free_stacka(*x);
		ft_free_stacka(*to_free);
		exit(2);
	}
	free(*x);
	(*x) = temp;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = temp1;
}

void	rr(t_node **a, t_node **b)
{
	rx(a, b);
	rx(b, a);
	write(1, "rr\n", 3);
}
