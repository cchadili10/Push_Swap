/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:25:10 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/23 09:51:57 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_node **a)
{
    t_node *temp = (*a)->next;
    t_node *temp1 = NULL;
    insertEnd(&temp1, (*a)->data, (*a)->index);
    free(*a);
    (*a) = temp;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = temp1;
}

void rr(t_node **a, t_node **b)
{
    ra(a);
    ra(b);
}
