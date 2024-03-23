/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:45:20 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/23 09:26:16 by hchadili         ###   ########.fr       */
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
void split_into_chunks(t_node **a, t_node **b, int i);
void sort_ink(t_node **a, t_node **b, int i);
void sort_link(t_node **a, t_node **b, int i);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *str, int c, size_t n);
void printList(t_node *node, char *s);
#endif