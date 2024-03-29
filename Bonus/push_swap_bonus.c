/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:40:33 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/28 23:33:28 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
int ft_cmpr(char *s, char *s1)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (s1[x])
	{
		if(s[x] != s1[x])
			return (0);
		x++;
	}
	if (s[x])
	    return (0);
	    
	return (1);
}

int ft_strcmp(char **s, char *s1)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (s[x])
	{
		// printf("%s ---> %s ----> x = %d \n",s[x], s1, x);
		if (ft_cmpr(s[x],s1))
			return x;
		x++;
	}
	return (-1);
}
void	ft_error(char *s, t_node *node)
{
	write(1, s, ft_strlen(s));
	write(1, "\n", 1);
	free(node);
	exit(0);
}

void ft_output(t_node **a, t_node **b)
{
	char *arr;
	static char *s[] = {"sa","sb","ss","pa","pb","ra","rb","rr","rra","rrb","rrr"};

	a = NULL;
	b = NULL;
	
	while ((arr = get_next_line(0)))
	{
		if(ft_strcmp(s,arr) == -1)
			ft_error("Error",*a);
		
		// printf("%s",arr);
	}
	
	
}

void	ft_for_nor(t_node **a, char *s, int *counter)
{
	char	**array;
	int		j;
	long		holder;

	j = 0;
	array = ft_split(s, ' ');
	if (!*array)
		ft_error("Error", *a);
	while (array[j])
	{
		if (is_number(array[j]))
			ft_error("Error", *a);
		holder = ft_atoi(array[j]);
		if(holder > INT_MAX || holder < INT_MIN)
			ft_error("Error", *a);
		insert_end(a, holder, 0);
		free(array[j]);
		((1) && (*counter += 1, j++));
	}
	free(array);
}

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	int		i;
	int		counter;
	// char	*str;

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
	index_list(a);
	ft_output(&a, &b);
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