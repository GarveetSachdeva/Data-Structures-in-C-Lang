#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *nodes[10];
    int *start;

    nodes[0] = (struct node *)malloc(sizeof(struct node));
    nodes[0]->data = 100;

    start=&(nodes[0]->data);

    nodes[1] = (struct node *)malloc(sizeof(struct node));
    nodes[1]->data = 200;
    nodes[1]->link = NULL;

    nodes[0]->link = nodes[1];   // linking address of nodes[1] to nodes[0]
    
    printf("%d",nodes[0]->link->data);
    printf("\n%d", *start);

    free(nodes[0]);
    free(nodes[1]);
    
    return 0;
}

