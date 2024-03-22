/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:40:33 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/22 21:45:25 by hchadili         ###   ########.fr       */
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

void sort_ink(t_node **a, t_node **b, int i)
 {
	t_node *tump = *a;
	static int status_of_index = 0;
	int node_position = 0;
	int x = i/2;
	if(*a == NULL)
		return;
	while (tump)
	{
		if (tump->index == i-1)
		{
			if(node_position == 1)
			{
				sa(a);
				printf("sb\n");
			}
			else if(x >= node_position)
			{
				while (node_position)
				{
					ra(a);
					printf("rb\n");
					node_position--;
				}
			}
			else
			{
				while (node_position != i)
				{
					rra(a);
					printf("rrb\n");
					node_position++;
				}
				node_position = 0;
			}
			status_of_index++;
			break;
		}
		node_position++;
	   tump = tump->next;
	}
	pa(a,b);
	printf("pa\n");
	node_position = 0;
	sort_ink(a, b, i-1);
}

void split_into_chunks(t_node **a, t_node **b, int i)
{
	t_node *tump = *a;
	static int is_first;
	int rot_bot = 0;
	int chek = 0;
	int pivot = i;
	int conter = 0;
	if(!*a)
		return;
	if(i > 100 && is_first == 0)
	{
		pivot = i / 9;
		is_first = pivot;
	}	
	else if (is_first == 0)
	{
		pivot = i / 5;
		is_first = pivot;
	}
	while (tump)
	{
		if(pivot >= tump->index)
		{
			while (conter)
			{
				if(rot_bot)
				{
					rr(a,b);
					printf("rr\n");
					rot_bot = 0;
				}
				else
				{
					ra(a);
					printf("ra\n");
				}
				conter--;
			}
			if(rot_bot)
			{
				ra(b);
				printf("rb\n");
				rot_bot = 0;
			}
			pa(a,b);
			printf("pb\n");
			if(tump->index <= (pivot - (is_first / 2)) && (*b)->next)
				rot_bot = 1;
			chek = 1;
		}
		conter++;
		tump = tump->next;
		if(chek == 1)
		{
			tump = *a;
			conter = 0;
			chek = 0;
		}
	}
	split_into_chunks(a,b,(pivot + is_first));
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
	int i;
	i = 1;
	if (argc == 1)
		return 0;
	while (argv[i])
	{
		insertEnd(&a, ft_atoi(argv[i]),0);
		i++;
	}
	index_list(a);

	split_into_chunks(&a,&b,(i - 1));
	
	sort_ink(&b,&a, i-1);

	return 0;
}
