/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:25:10 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/28 01:24:22 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

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
}

void	rr(t_node **a, t_node **b)
{
	ra(a, b);
	rb(b, a);
}
