/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 01:27:50 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/17 01:39:26 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_node **a)
{
    t_node *tump = *a;
    *a = tump->next;
    tump->next = tump->next->next;
    (*a)->next = tump;
}
void ss(t_node **a,t_node **b)
{
   sa(a);
   sa(b);
}