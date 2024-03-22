/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:45:20 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/21 23:52:17 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
    int data;
    int index;
    int bl;
    struct s_node* next;
} t_node;



# include <stdio.h>
# include <stdlib.h>
# include <limits.h>


int	ft_atoi(const char *str);
void sa(t_node **a);
void pa(t_node **a,t_node **b);
void rra(t_node **a);
void ra(t_node **a);
void rr(t_node **a, t_node **b);
void insertEnd(t_node **head, int data,int index);
#endif