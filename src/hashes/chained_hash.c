#include <stdio.h>
#include <stdlib.h>

void insert(int value);
#define MAX_SIZE 3
typedef struct Node *NodePtr;
struct Node {
	int data;
	NodePtr next;
};
NodePtr hash[MAX_SIZE] = { NULL, NULL, NULL };
/**
 * @author Rajendra Kumar R Yadav
 * Simple linked list implementation
 */
void insert(int value)
{
	NodePtr tmpNode = malloc(sizeof(NodePtr));
	tmpNode->data = value;
	tmpNode->next = NULL;

	int hashIndex = value % MAX_SIZE;

	if (hash[hashIndex] == NULL) {
		hash[hashIndex] = tmpNode;
	} else {
		while (hash[hashIndex]->next != NULL) {
			hash[hashIndex]->next = tmpNode;
		}
	}
	free(tmpNode);
}

void print()
{
}

int main()
{
	insert(10);
	insert(20);
	insert(33);
	insert(44);
}