#include "header.h"
int searchNode(linkedList head, int key)
{
    linkedList temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {

            return 1;
        }
        temp = temp->next;
    }

    return -1;
}