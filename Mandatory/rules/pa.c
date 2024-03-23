/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:51:28 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/23 09:51:08 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void pa(t_node **a,t_node **b)
{
    t_node *temp = NULL;
    t_node *tempx = (*a)->next;
    insertEnd(&temp,(*a)->data,(*a)->index);
    free(*a);
    temp->next = *b;
    *b = temp;
    *a = tempx;
}