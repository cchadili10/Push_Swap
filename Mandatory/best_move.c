/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:02:58 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/30 14:53:44 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_small_big(t_node **a, t_node **b, int big, int small)
{
	if (small == 1)
		sb(b);
	else if ((ft_sizeof_stack(*b) / 2) >= small)
	{
		while (small--)
			rb(b, a);
	}
	else
		ft_for_norml(b, a, small, ft_sizeof_stack(*b));
	pa(a, b);
	big = ft_get_max(*b, ft_sizeof_stack(*b));
	if (big == 1)
		sb(b);
	else if ((ft_sizeof_stack(*b) / 2) >= big)
	{
		while (big--)
			rb(b, a);
	}
	else
		ft_for_norml(b, a, big, ft_sizeof_stack(*b));
	pa(a, b);
	sa(a);
}

void	move_to_stackl(t_node **b, t_node **a)
{
	int	big;
	int	small;
	int	check;

	big = ft_get_max(*b, ft_sizeof_stack(*b) - 1);
	small = ft_get_max(*b, ft_sizeof_stack(*b) - 2);
	check = ft_small_or_big(*b, small, big);
	if (check)
	{
		if (big == 1)
			sb(b);
		else if ((ft_sizeof_stack(*b) / 2) >= big)
		{
			while (big--)
				rb(b, a);
		}
		else
			ft_for_norml(b, a, big, ft_sizeof_stack(*b));
		pa(a, b);
	}
	else
		ft_move_small_big(a, b, big, small);
}

void	sort_link(t_node **a, t_node **b)
{
	if (*b == NULL)
		return ;
	move_to_stackl(b, a);
	sort_link(a, b);
}
