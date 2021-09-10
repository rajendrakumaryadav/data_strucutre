#include "header.h"

int main(int argc, char **argv)
{
    linkedList first, second, third, last;

    first = MALLOC(sizeof(linkedList));
    second = MALLOC(sizeof(linkedList));
    third = MALLOC(sizeof(linkedList));
    last = MALLOC(sizeof(linkedList));

    first->data = 10;
    second->data = 20;
    third->data = 30;
    last->data = 40;

    first->next = second;
    second->next = third;
    third->next = last;
    last->next = NULL;

    int respones = searchNode(first, 40);

    if (respones == 1)
        printf("found!\n");
    else
        printf("not exists!\n");

    respones = searchNode(first, 50);

    if (respones == 1)
        printf("found!\n");
    else
        printf("not exists!\n");

    return 0;
}
