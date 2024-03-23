/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:23:53 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/23 10:25:28 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rra(t_node **a)
{
    t_node *temp = *a;
    t_node *temp1 = NULL;
    t_node *lastNode;
    
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
}

void rrr(t_node **a, t_node **b)
{
    rra(a);
    rra(b);
}
