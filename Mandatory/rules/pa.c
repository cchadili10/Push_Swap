/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:51:28 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 02:51:48 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_node **a, t_node **b)
{
	t_node	*temp;
	t_node	*tempx;

	tempx = (*a)->next;
	temp = NULL;
	insert_end(&temp, (*a)->data, (*a)->index);
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

	tempx = (*b)->next;
	temp = NULL;
	insert_end(&temp, (*b)->data, (*b)->index);
	free(*b);
	temp->next = *a;
	*a = temp;
	*b = tempx;
	write(1, "pa\n", 3);
}
