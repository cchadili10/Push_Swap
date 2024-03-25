/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 00:39:29 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/25 03:47:19 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_small_number(t_node *a, t_node *b, int size)
{
	t_node *tmp = a;
	int x = 0;
	int ckeck = 0;


	// printList(a,"A");
	// printf("\n");
	if(size == 5)
	{
		while (tmp)
		{
			if(tmp->index == 4)
				break;
			x++;
			tmp = tmp->next;
		}
		if(x <= 2)
		{
			while (x)
			{
			   ra(&a);
			   printf("ra\n");
			   x--;
			}
			pa(&a,&b);
			printf("pb\n");
		}
		else
		{
			while (x <= 4)
			{
			   rra(&a);
			   printf("rra\n");
			   x++;
			}
			pa(&a,&b);
			printf("pb\n");
		}
		size--;
		ckeck++;
	}
	tmp = a;
	x = 0;
	if (size == 4)
	{
		while (tmp)
		{
			if(tmp->index == 3)
				break;
			x++;
			tmp = tmp->next;
		}
		if(x <= 2)
		{
			while (x)
			{
			   ra(&a);
			   printf("ra\n");
			   x--;
			}
			pa(&a,&b);
			printf("pb\n");
		}
		else
		{
			while (x <= 3)
			{
			   rra(&a);
			   printf("rra\n");
			   x++;
			}
			pa(&a,&b);
			printf("pb\n");
		}
		size--;
		ckeck++;          
	}
	tmp = a;
	x = 0;
	while (tmp)
	{
		if(tmp->index == 2)
			break;
		tmp = tmp->next;
		x++;
	}
	if (x == 1)
	{ 
		rra(&a);
		printf("rra\n");
		if(a->index > a->next->index)
		{
			sa(&a);
			printf("sa\n");
		}
	}
	if (x == 0)
	{ 
		ra(&a);
		printf("ra\n");
		if(a->index > a->next->index)
		{
			sa(&a);
			printf("sa\n");
		}
	}
	if (x == 2)
	{ 
		if(a->index > a->next->index)
		{
			sa(&a);
			printf("sa\n");
		}
		
	}
	while (ckeck)
	{
		pa(&b,&a);
		printf("pa\n");
		ra(&a);
		printf("ra\n");
		ckeck--;
	}
	// printList(a,"A");
	// printf("\n");
	// printList(b,"B");
}
//  1 2 3   3 2 1   2 3 1   3 1 2   1 3 2
//