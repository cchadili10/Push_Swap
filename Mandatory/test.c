
#include "push_swap.h"
void printList(t_node *node, char *s)
{
	while (node != NULL)
	{
		printf("STACK %s -->  Index %d: Data %d\n",s, node->index, node->data);
		node = node->next;
	}
}

int main(int argc, char const *argv[])
{
    t_node tan ;
    t_node tan2;
    tan.data = 20;
    tan.index = 0;
    tan2.data = 10;
    tan2.index = 1;
    tan.next = &tan2;
    printList(&tan,"A");
    tan = *tan.next;
    printList(&tan,"A");

    system("leaks a.out");
    return 0;
}
