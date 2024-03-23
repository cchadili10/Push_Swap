/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:40:33 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/23 09:49:55 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void printList(t_node *node, char *s)
{
	while (node != NULL)
	{
		printf("STACK %s -->  Index %d: Data %d\n",s, node->index, node->data);
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

void insertEnd(t_node **head, int data,int index)
{
	t_node *newNode = createNode(data , index);
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
		if(data > node->data)
			x++;
		node = node->next;
	}
	return (x);
}
void index_list(t_node *node)
{
	t_node *temp1;
	
	temp1 = node;
	while (node != NULL)
	{
		node->index = get_index(temp1,node->data);
		node = node->next;
	}
}


int main(int argc, char *argv[])
{
	t_node *a = NULL;
	t_node *b = NULL;
	char **array;
	int i;
	i = 0;
	if (argc == 1)
		return 0;
	if (argc == 2)
	{
		array = ft_split(argv[1], ' ');
		while (array[i])
		{
			insertEnd(&a, ft_atoi(array[i]),0);
			free(array[i]);
			i++;
		}
		free(array);
	}
	else
	{
		i = 1;
		while (argv[i])
		{
			insertEnd(&a, ft_atoi(argv[i]),0);
			i++;
		}
		i--;
	}
	index_list(a);
	if(i > 50)
	{
		split_into_chunks(&a,&b,(i));
		sort_ink(&b,&a, i);
	}
	else
		sort_link(&a,&b, i);
	system("leaks push_swap");
	return 0;
}
