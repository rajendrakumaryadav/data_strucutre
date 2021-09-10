#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node *linkedList;

int searchNode(linkedList, int);

#define MALLOC(size) \
    ((linkedList)malloc(size))
