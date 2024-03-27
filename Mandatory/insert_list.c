/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:54:39 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 02:05:52 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int data, int index)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	new_node->data = data;
	new_node->index = index;
	new_node->next = NULL;
	return (new_node);
}

void	insert_end(t_node **head, int data, int index)
{
	t_node	*new_node;
	t_node	*temp;

	new_node = create_node(data, index);
	if (*head == NULL)
	{
		*head = new_node;
		return ;
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
}
