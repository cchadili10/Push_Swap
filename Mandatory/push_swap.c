/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:40:33 by hchadili          #+#    #+#             */
/*   Updated: 2024/03/17 02:36:18 by hchadili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
    // t_node *temp = a;
    // int x = 0;
    
    // while (temp != NULL)
    // {
    //     if(temp->index == 0)
    //         break;
    //     x++;
    //     temp = temp->next;
    // }
    printf("%d\n",1);
    sa(a);
    pa(a,b);
    pa(a,b);
    // *a = NULL;
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

void printList(t_node *node)
{
    while (node != NULL)
    {
        printf("Index %d: Data %d\n", node->index, node->data);
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
    printf("\nLinked List:\n");
    index_list(a);
    printList(a);
    sort_ink(&a,&b, i-1);
    // a = NULL;
    
    printList(a);
    printf("%d\n",1);
    printList(b);
    return 0;
}

//