/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:23:53 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/18 01:53:34 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rra(t_node **a)
{
    t_node *temp = *a;;
    t_node *temp1 = NULL;
    
    while (temp->next != NULL)
        temp = temp->next;
    insertEnd(&temp1, temp->data, temp->index);
    temp1->next = *a;
    *a = temp1;
    temp = *a;
    while (temp->next->next != NULL)
        temp = temp->next;
    temp->next = NULL;
}

void rrr(t_node **a, t_node **b)
{
    rra(a);
    rra(b);
}
