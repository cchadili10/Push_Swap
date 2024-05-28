/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:51:28 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/28 00:32:52 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_node **a, t_node **b)
{
	t_node	*temp;
	t_node	*tempx;

	if (!a || !(*a))
		return ;
	tempx = (*a)->next;
	temp = NULL;
	insert_end(&temp, (*a)->data, (*a)->index);
	if (!temp)
	{
		ft_free_stacka(*a);
		ft_free_stacka(*b);
		exit(2);
	}
	free(*a);
	temp->next = *b;
	*b = temp;
	*a = tempx;
	write(1, "pb\n", 3);
}

void	pa(t_node **a, t_node **b)
{
	t_node	*temp;
	t_node	*tempx;

	if (!b || !(*b))
		return ;
	tempx = (*b)->next;
	temp = NULL;
	insert_end(&temp, (*b)->data, (*b)->index);
	if (!temp)
	{
		ft_free_stacka(*a);
		ft_free_stacka(*b);
		exit(2);
	}
	free(*b);
	temp->next = *a;
	*a = temp;
	*b = tempx;
	write(1, "pa\n", 3);
}
