#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node *Node;
int searchKey(Node list, int key)
{
    Node tmp = list;
    while (tmp != NULL)
    {
        if (tmp->data == key)
        {
            return 1;
        }
        tmp = tmp->next;
    }
    return -1;
}

void printMessage(Node head, int key)
{
    if (searchKey(head, key) == 1)
    {
        printf("%d, Found in list!", key);
    }
    else
    {
        printf("%d, Not Found in the list!", key);
    }
    printf("\n");
}

int main()
{

    Node first, second, third, last;
    first = malloc(sizeof(Node));
    second = malloc(sizeof(Node));
    third = malloc(sizeof(Node));
    last = malloc(sizeof(Node));
    first->data = 10;
    second->data = 20;
    third->data = 30;
    last->data = 40;

    first->prev = last->next = NULL;
    first->next = second;
    second->next = third;
    third->next = last;

    second->prev = first;
    third->prev = second;
    last->prev = third;

    Node temp = last;

    printMessage(first, 20);
    printMessage(first, 200);
    printMessage(first, 10);
    printMessage(first, 4000);

    return 0;
}