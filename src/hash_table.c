#include <stdio.h>
#include <stdlib.h>

#define HASHSIZE 5
int arr[HASHSIZE];

void init()
{
	int i = 0;
	for (; i < HASHSIZE; i++)
		arr[i] = -1;
}
int insert(int value)
{
	int key = value % HASHSIZE;
	int index = key;
	// validating & handling collision
	while (arr[index] != -1) {
		index = (index + 1) % HASHSIZE;
		if (index == key) {
			printf("Hash Table full!\n");
			return 0;
		}
	}
	arr[index] = value;
	return 1;
}
/**
 * Function will delete the element value and set -1 at the 
 * place and return 1 on successful operation,
 * while return 0 while failed to find or delete the value.
 */
int delete (int value)
{
	int key = value % HASHSIZE;
	int index = key;
	// validating & handling collision
	while (arr[index] != value) {
		index = (index + 1) % HASHSIZE;
		if (index == key)
			return 0;
	}
	arr[index] = -1;
	return 1;
}

int search(int value)
{
	int key = value % HASHSIZE;
	int index = key;

	while (arr[index] != value) {
		index = (index + 1) % value;
		if (index == key)
			return 0;
	}
	return 1;
}
void printFoundOrNot(int data, int value)
{
	if (data == 1)
		printf("%d Element is Found!\n", value);
	else
		printf("%d Not in HashTable!\n", value);
}

void printInsertedOrNot(int data, int value)

{
	if (data == 1)
		printf("%d Element is Inserted!\n", value);
}

void deleteOrNot(int data, int value)
{
	if (data == 1)
		printf("%d Element is deleted!\n", value);
	else
		printf("%d Not in HashTable!\n", value);
}

int main()
{
	init();

	int value = 30;

	printInsertedOrNot(insert(value), value);
	value = 40;
	printInsertedOrNot(insert(value), value);

	deleteOrNot(delete (value), value);
	deleteOrNot(delete (1000), 1000);
	printFoundOrNot(search(1000), 1000);
	printFoundOrNot(search(40), 40);
	printFoundOrNot(search(30), 30);

	return EXIT_SUCCESS;
}