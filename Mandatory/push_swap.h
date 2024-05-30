/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:45:20 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/30 14:53:44 by hchadili         ###   ########.fr       */
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
	struct s_node	*next;
}	t_node;

void	sa(t_node **a);
void	sb(t_node **b);

void	pa(t_node **a, t_node **b);
void	pb(t_node **b, t_node **a);

void	rra(t_node **a, t_node **to_free);
void	rrb(t_node **b, t_node **to_free);
void	rrr(t_node **a, t_node **b);

void	ra(t_node **a, t_node **to_free);
void	rb(t_node **b, t_node **to_free);
void	rr(t_node **a, t_node **b);

t_node	*create_node(int data, int index);
void	insert_end(t_node **head, int data, int index);

long	ft_atoi(const char *str, char **arr, t_node *a, int x);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
void	ft_error(char *s, t_node *node);

void	insert_end(t_node **head, int data, int index);
void	split_into_chunks(t_node **a, t_node **b, int i);
void	sort_link(t_node **a, t_node **b);

int		is_not_number(char *s);
int		ft_repeted_number(t_node *a, int i);
int		is_lost_sort(t_node *node, int size);

void	index_list(t_node *node);
void	ft_free_arr(char **arr, int x);
void	sort_small_number(t_node **a, t_node **b, int size);
int		ft_sizeof_stack(t_node *a);
void	ft_free_stacka(t_node *head);

int		ft_get_max(t_node *node, int x);
int		ft_small_or_big(t_node *node, int small, int big);
void	ft_for_norml(t_node **b, t_node **a, int node_position, int size);

#endif