/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:40:33 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/25 02:27:28 by hchadili         ###   ########.fr       */
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

t_node *createNode(int data, int index)
{
	t_node *newNode = malloc(sizeof(t_node));
	newNode->data = data;
	newNode->index = index;
	newNode->next = NULL;
	return newNode;
}

void insertEnd(t_node **head, int data, int index)
{
	t_node *newNode = createNode(data, index);
	if (*head == NULL)
	{
		*head = newNode;
		return;
	}
	t_node *temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
}

int get_index(t_node *node, int data)
{
	int x;

	x = 0;
	while (node != NULL)
	{
		if (data > node->data)
			x++;
		node = node->next;
	}
	return (x);
}
void ft_error(char *s, t_node *node)
{
	printf("%s", s);
	free(node);
	exit(0);
}
void index_list(t_node *node)
{
	t_node *temp1;

	temp1 = node;
	while (node != NULL)
	{
		node->index = get_index(temp1, node->data);
		node = node->next;
	}
}
int ft_isdigit(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	return (0);
}
int is_number(char *s)
{
	int x = 0;

	if ((s[x] != '+' && s[x] != '-') && (s[x] < 48 || s[x] > 57))
		return 1;
	x++;
	while (s[x])
	{
		if (s[x] < 48 || s[x] > 57)
			return 1;
		x++;
	}
	return 0;
}
int ft_repeted_number(t_node *a, int i)
{
	t_node *tmp = a;
	static int x;
	int ckeck = 0;
	if (i == 0)
		return 1;
	while (tmp)
	{
		if (tmp->index == x)
		{
			ckeck = 1;
			break;
		}
		tmp = tmp->next;
	}
	x++;
	if (ckeck == 1)
	{
		return ft_repeted_number(a, i - 1);
	}
	return 0;
}
int is_lost_sort(t_node *node, int size)
{
	int x;
	t_node *tmp = node;

	x = 0;
	while (size)
	{
		if (tmp->index != x)
			return 0;
			// printf("index = %d x = %d\n",node, )
		tmp = tmp->next;
		size--;
		x++;
	}
	return 1;
}
int main(int argc, char *argv[])
{
	t_node *a = NULL;
	t_node *b = NULL;
	char **array;
	int i;
	int j;
	int counter;
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
	// printList(a,"A");
	if (ft_repeted_number(a, counter) == 0)
		ft_error("Error", a);
	if(is_lost_sort(a,counter))
		return 0;
	if(counter <= 5)
	{
		// printList(a,"A");
		sort_small_number(a,b, counter);
	}
	else if (counter > 50)
	{
		split_into_chunks(&a, &b, counter);
		sort_ink(&b, &a, counter);
	}
	else
		sort_link(&a, &b, counter);
	// system("leaks push_swap");
	return 0;
}
