/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:40:33 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/29 17:57:49 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_free_stacka(t_node *head)
{
	t_node	*tmp;

	if (!head)
		return ;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

void	ft_error(char *s, t_node *node)
{
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
	ft_free_stacka(node);
	exit(0);
}

void	ft_for_nor(t_node **a, char *s, int *counter)
{
	char	**array;
	int		j;
	long	holder;

	((1) && (j = 0, array = ft_split(s, 32)));
	if (!array)
		ft_error("Error", *a);
	while (array[j])
	{
		if (is_not_number(array[j]))
		{
			ft_free_arr(array, j);
			ft_error("Error", *a);
		}
		holder = ft_atoi(array[j], array, *a, j);
		if (holder > INT_MAX || holder < INT_MIN)
		{
			ft_free_arr(array, j);
			ft_error("Error", *a);
		}
		insert_end(a, holder, 0);
		free(array[j]);
		((1) && (*counter += 1, j++));
	}
	free(array);
}

void	ft_check(t_node *a, t_node *b, int counter, int boo_lean)
{
	if (boo_lean)
	{
		if (is_lost_sort(a, b, counter))
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
	else
	{
		ft_free_stacka(a);
		exit(1);
	}
}

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	int		i;
	int		counter;

	((1) && (a = NULL, b = NULL, i = 1, counter = 0));
	if (argc == 1)
		return (0);
	else
	{
		while (argv[i])
		{
			ft_for_nor(&a, argv[i], &counter);
			i++;
		}
	}
	if (ft_sizeof_stack(a) != counter)
		ft_check(a, b, counter, 0);
	index_list(a);
	ft_output(&a, &b);
	ft_check(a, b, counter, 1);
	ft_free_stacka(a);
	ft_free_stacka(b);
	return (0);
}
