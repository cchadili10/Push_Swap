/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:54:39 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/26 03:30:14 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *createNode(int data, int index)
{
	t_node *newNode;
	
	newNode = malloc(sizeof(t_node));
	newNode->data = data;
	newNode->index = index;
	newNode->next = NULL;
	return (newNode);
}

void insertEnd(t_node **head, int data, int index)
{
	t_node *newNode;
	
	newNode = createNode(data, index);
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