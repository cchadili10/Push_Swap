/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:39:29 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 02:39:31 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_number_five(t_node **a, t_node **b)
{
	t_node	*tmp;
	int		x;

	x = 0;
	tmp = *a;
	while (tmp)
	{
		if (tmp->index == 4)
			break ;
		x++;
		tmp = tmp->next;
	}
	if (x <= 2)
	{
		while (x--)
			ra(a);
		pb(a, b);
	}
	else
	{
		while (x++ <= 4)
			rra(a);
		pb(a, b);
	}
}

void	ft_number_four(t_node **a, t_node **b)
{
	t_node	*tmp;
	int		x;

	x = 0;
	tmp = *a;
	while (tmp)
	{
		if (tmp->index == 3)
			break ;
		x++;
		tmp = tmp->next;
	}
	if (x <= 2)
	{
		while (x--)
			ra(a);
		pb(a, b);
	}
	else
	{
		while (x++ <= 3)
			rra(a);
		pb(a, b);
	}
}

int	get_number(t_node *a)
{
	t_node	*node;
	int		x;

	node = a;
	x = 0;
	while (node)
	{
		if (node->index == 2)
			break ;
		node = node->next;
		x++;
	}
	return (x);
}

void	ft_number_thre(t_node **a)
{
	int	x;

	x = get_number(*a);
	if (x == 1)
	{
		rra(a);
		if ((*a)->index > (*a)->next->index)
			sa(a);
	}
	else if (x == 0)
	{
		ra(a);
		if ((*a)->index > (*a)->next->index)
			sa(a);
	}
	else if (x == 2)
	{
		if ((*a)->index > (*a)->next->index)
			sa(a);
	}
}

void	sort_small_number(t_node **a, t_node **b, int size)
{
	int	ckeck;

	ckeck = 0;
	if (size == 5)
	{
		ft_number_five(a, b);
		((1) && (size--, ckeck++));
	}
	if (size == 4)
	{
		ft_number_four(a, b);
		((1) && (size--, ckeck++));
	}
	if (size == 3)
		ft_number_thre(a);
	if (size == 2)
	{
		if ((*a)->index > (*a)->next->index)
			sa(a);
	}
	while (ckeck--)
	{
		pa(a, b);
		ra(a);
	}
}
