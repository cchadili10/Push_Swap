/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:45:20 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/25 02:28:03 by hchadili         ###   ########.fr       */
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


void sa(t_node **a);
void pa(t_node **a,t_node **b);
void rra(t_node **a);
void ra(t_node **a);
void rr(t_node **a, t_node **b);

int	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *str, int c, size_t n);

void insertEnd(t_node **head, int data,int index);
void split_into_chunks(t_node **a, t_node **b, int i);
void sort_ink(t_node **a, t_node **b, int i);
void sort_link(t_node **a, t_node **b, int i);
void printList(t_node *node, char *s);
void sort_small_number(t_node *a, t_node *b, int size);
#endif