/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:58:09 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/28 00:22:06 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	get_index(t_node *node, int data)
{
	int	x;

	x = 0;
	while (node != NULL)
	{
		if (data > node->data)
			x++;
		node = node->next;
	}
	return (x);
}

void	index_list(t_node *node)
{
	t_node	*temp1;

	temp1 = node;
	while (node != NULL)
	{
		node->index = get_index(temp1, node->data);
		node = node->next;
	}
}
