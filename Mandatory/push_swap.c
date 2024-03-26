/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:40:33 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/26 03:41:32 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void printList(t_node *node, char *s)
{
	while (node != NULL)
	{
		printf("STACK %s -->  Index %d: Data %d\n", s, node->index, node->data);
		node = node->next;
	}
}

void ft_error(char *s, t_node *node)
{
	printf("%s", s);
	free(node);
	exit(0);
}
int main(int argc, char *argv[])
{
	t_node *a;
	t_node *b;
	char **array;
	int i;
	int j;
	int counter;

	a = NULL;
	b = NULL;
	i = 0;
	j = 0;
	counter = 0;
	if (argc == 1)
		return 0;
	else
	{
		i = 1;
		while (argv[i])
		{
			array = ft_split(argv[i], ' ');
			if(!*array)
				ft_error("Error", a);
			while (array[j])
			{
				if (is_number(array[j]))
					ft_error("Error", a);
				insertEnd(&a, ft_atoi(array[j]), 0);
				free(array[j]);
				j++;
				counter++;
			}
			j = 0;
			free(array);
			i++;
		}
	}
	index_list(a);
	if (ft_repeted_number(a, counter) == 0)
		ft_error("Error", a);
	if(is_lost_sort(a,counter))
		return (0);
	if(counter <= 5)
		sort_small_number(&a,&b, counter);
	else if (counter > 50)
	{
		split_into_chunks(&a, &b, counter);
		sort_ink(&a, &b, counter);
	}
	else
		sort_link(&a, &b, counter);
	system("leaks push_swap");
	return (0);
}
