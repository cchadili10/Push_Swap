/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:40:33 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/20 00:29:27 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void printList(t_node *node, char *s)
{
    while (node != NULL)
    {
        printf("STACK %s -->  Index %d: Data %d\n",s, node->index, node->data);
        node = node->next;
    }
}

t_node *createNode(int data, int index)
{
    t_node *newNode = malloc(sizeof(t_node));
    newNode->data = data;
    newNode->index = index;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(t_node **head, int data,int index)
{
    t_node *newNode = createNode(data , index);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    t_node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void sort_ink(t_node **a, t_node **b, int i)
 {
    t_node *tump = *a;
    static int status_of_index = 0;
    int node_position = 0;
    int x = i/2;
    // printf("%d \t\t\t  %d \t\t\t %d\n",x, i, status_of_index);
    if(*a == NULL)
    {
        tump = *b;
        while (tump)
        {

            pa(b,a);
            printf("pa\n");
            i--;
            tump = tump->next;
        }
        
        return;
    }
    //  printf("\n\n%d\n\n",status_of_index);
    while (tump)
    {
        if (tump->index == status_of_index)
        {
            if(x >= node_position)
            {
                while (node_position)
                {
                    ra(a);
                    printf("ra\n");
                    node_position--;
                }
            }
            else
            {
                while (node_position != i)
                {
                    rra(a);
                    printf("rra\n");
                    node_position++;
                }
                node_position = 0;
            }
            status_of_index++;
            break;
        }
        node_position++;
       tump = tump->next;
    }
    pa(a,b);
    printf("pb\n");
    node_position = 0;
    sort_ink(a, b, i-1);
 }

int get_index(t_node *node, int data)
{
    int x;

    x = 0;
    while (node != NULL)
    {
        if(data > node->data)
            x++;
        node = node->next;
    }
    return (x);
}


void index_list(t_node *node)
{
    t_node *temp1;

    temp1 = node;
    while (node != NULL)
    {
        node->index = get_index(temp1,node->data);
        node = node->next;
    }
}


// 25 12 27 3 65 9  7
int main(int argc, char *argv[])
{
    t_node *a = NULL;
    t_node *b = NULL;
    int i;
    i = 1;
    while (argv[i])
    {
        insertEnd(&a, ft_atoi(argv[i]),0);
        i++;
    }
    index_list(a);
    sort_ink(&a,&b, i-1);
    return 0;
}

//