#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *prev;
        struct node *next;
    };
    struct node *head, *mid, *last;

    head = malloc(sizeof(struct node));
    mid = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));

    head->data = 10;
    mid->data = 20;
    last->data = 30;

    //Implement task 1
    head->next = mid;
    mid->next = last;
    last->next = NULL;

    //Implement task 2 here
    last->prev = mid;
    mid->prev = head;
    head->prev = NULL;

    struct node *temp = last;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");

    return 0;
}