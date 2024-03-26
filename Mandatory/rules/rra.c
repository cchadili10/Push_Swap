/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:23:53 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/26 03:04:04 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rra(t_node **a)
{
    t_node *temp;
    t_node *temp1;
    t_node *lastNode;
    
    temp = *a;
    temp1 = NULL;
    while (temp->next != NULL)
        temp = temp->next;
    insertEnd(&temp1, temp->data, temp->index);
    temp1->next = *a;
    *a = temp1;
    temp = *a;
    while (temp->next->next != NULL)
        temp = temp->next;
    lastNode = temp->next;
    temp->next = NULL;
    free(lastNode);
    write(1,"rra\n",4);
}

void rrb(t_node **b)
{
    t_node *temp;
    t_node *temp1;
    t_node *lastNode;

    temp = *b;
    temp1 = NULL;
    while (temp->next != NULL)
        temp = temp->next;
    insertEnd(&temp1, temp->data, temp->index);
    temp1->next = *b;
    *b = temp1;
    temp = *b;
    while (temp->next->next != NULL)
        temp = temp->next;
    lastNode = temp->next;
    temp->next = NULL;
    free(lastNode);
    write(1,"rrb\n",4);
}

void rrx(t_node **b)
{
    t_node *temp;
    t_node *temp1;
    t_node *lastNode;

    temp = *b;
    temp1 = NULL;
    while (temp->next != NULL)
        temp = temp->next;
    insertEnd(&temp1, temp->data, temp->index);
    temp1->next = *b;
    *b = temp1;
    temp = *b;
    while (temp->next->next != NULL)
        temp = temp->next;
    lastNode = temp->next;
    temp->next = NULL;
    free(lastNode);
    
}

void rrr(t_node **a, t_node **b)
{
    rrx(a);
    rrx(b);
    write(1,"rrr\n",4);
}
