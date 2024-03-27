/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:45:20 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/27 02:49:36 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_node
{
	int				data;
	int				index;
	int				bl;
	struct s_node	*next;
}	t_node;

void	sa(t_node **a);
void	sb(t_node **b);

void	pa(t_node **a, t_node **b);
void	pb(t_node **b, t_node **a);

void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

t_node	*create_node(int data, int index);
void	insert_end(t_node **head, int data, int index);

int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *str, int c, size_t n);

void	insert_end(t_node **head, int data, int index);
void	split_into_chunks(t_node **a, t_node **b, int i);
void	sort_ink(t_node **a, t_node **b, int i);
void	sort_link(t_node **a, t_node **b, int i);
void	printList(t_node *node, char *s);

int		is_number(char *s);
int		ft_repeted_number(t_node *a, int i);
int		is_lost_sort(t_node *node, int size);

void	index_list(t_node *node);

void	sort_small_number(t_node **a, t_node **b, int size);
#endif