/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:40:33 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 02:08:14 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *s, t_node *node)
{
	printf("%s", s);
	free(node);
	exit(0);
}

void	ft_for_nor(t_node **a, char *s, int *counter, int i)
{
	char	**array;
	int		j;

	j = 0;
	array = ft_split(s, ' ');
	if (!*array)
		ft_error("Error", *a);
	while (array[j])
	{
		if (is_number(array[j]))
			ft_error("Error", *a);
		insert_end(a, ft_atoi(array[j]), 0);
		free(array[j]);
		((1) && (*counter += 1, j++));
	}
	free(array);
}

void	ft_sort_list(t_node **a, t_node **b, int counter)
{
	if (ft_repeted_number(*a, counter) == 0)
		ft_error("Error", *a);
	if (is_lost_sort(*a, counter))
		return (0);
	if (counter <= 5)
		sort_small_number(a, b, counter);
	else if (counter > 50)
	{
		split_into_chunks(a, b, counter);
		sort_ink(a, b, counter);
	}
	else
		sort_link(a, b, counter);
}

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	char	**array;
	int		i;
	int		counter;

	((1) && (a = NULL, b = NULL, i = 1, counter = 0));
	if (argc == 1)
		return (0);
	else
	{
		while (argv[i])
		{
			ft_for_nor(&a, argv[i], &counter, i);
			i++;
		}
	}
	index_list(a);
	ft_sort_list(&a, &b, counter);
	return (0);
}

// void printList(t_node *node, char *s)
// {
// 	while (node != NULL)
// 	{
// 		printf("STACK %s -->  Index %d: Data %d\n", s, node->index, node->data);
// 		node = node->next;
// 	}
// }