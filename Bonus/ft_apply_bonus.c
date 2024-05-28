/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:55:41 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/28 01:46:36 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_cmpr(char *s, char *s1)
{
	int	x;

	x = 0;
	while (s[x])
	{
		if (s[x] != s1[x])
			return (0);
		x++;
	}
	if (s1[x] != 10)
		return (0);
	return (1);
}

int	ft_strcmp(char **s, char *s1)
{
	int	x;

	x = 0;
	while (s[x])
	{
		if (ft_cmpr(s[x], s1))
			return (x);
		x++;
	}
	return (-1);
}

void	ft_ruls(t_node **a, t_node **b, int position)
{
	if (position == 0)
		sa(a);
	else if (position == 1)
		sb(b);
	else if (position == 2)
		ss(a, b);
	else if (position == 3)
		pa(a, b);
	else if (position == 4)
		pb(a, b);
	else if (position == 5)
		ra(a, b);
	else if (position == 6)
		rb(b, a);
	else if (position == 7)
		rr(a, b);
	else if (position == 8)
		rra(a, b);
	else if (position == 9)
		rrb(b, a);
	else if (position == 10)
		rrr(a, b);
}

void	ft_output(t_node **a, t_node **b)
{
	char		*arr;
	int			position;
	static char	*s[] = {"sa", "sb", "ss", "pa", "pb", "ra",
		"rb", "rr", "rra", "rrb", "rrr"};

	*b = NULL;
	arr = get_next_line(0);
	while (arr)
	{
		position = ft_strcmp(s, arr);
		if (position == -1)
			ft_error("Error", *a);
		else
			ft_ruls(a, b, position);
		free(arr);
		arr = get_next_line(0);
	}
	free(arr);
}
