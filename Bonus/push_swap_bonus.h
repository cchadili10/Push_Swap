/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:45:20 by hchadili          #+#    #+#             */
/*   Updated: 2024/05/29 18:01:52 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

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
void	ss(t_node **a, t_node **b);

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
void	ft_error(char *s, t_node *node);

long	ft_atoi(const char *str, char **arr, t_node *a, int x);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
void	ft_output(t_node **a, t_node **b);

int		is_not_number(char *s);
int		ft_repeted_number(t_node *a, int i);
int		is_lost_sort(t_node *node, t_node *node1, int size);

char	*get_next_line(int fd);
char	*ft_strdup(char *s1, int b);
char	*ft_strjoin(char *s1, char *s2);
void	ft_bzero(void *s, size_t n);
int		new_line_check(char *str, int *len);

void	index_list(t_node *node);
void	ft_free_arr(char **arr, int x);
int		ft_sizeof_stack(t_node *a);
void	ft_free_stacka(t_node *head);
void	sort_small_number(t_node **a, t_node **b, int size);
#endif