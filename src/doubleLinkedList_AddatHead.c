/**
 * @author rajendrakumaryadav <https://github.com/rajendrakumaryadav>
 * @date Sep, 11 2021 [06:06]
 * 
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct node *linkedList;
linkedList head = NULL;

void addFirst(int val)
{
    linkedList newNode = malloc(sizeof(linkedList));
    newNode->data = val;

    if (head == NULL)
    {
        newNode->next = newNode->prev = NULL;
        head = newNode;
    }
    else
    {
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void printList()
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    addFirst(10);
    addFirst(20);
    addFirst(30);

    printList();
    printf("\n");
}