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
	while (arr[index] != value) {
		index = (index + 1) % HASHSIZE;
		if (index == key)
			return 0;
	}
	arr[index] = -1;
	return 1;
}

int main()
{
	init();

	int value = 30;

	if (insert(value) == 1) {
		printf("Data %d added to Table.\n", value);
	}
	value = 40;

	if (insert(value) == 1) {
		printf("Data %d added to Table.\n", value);
	}

	if (delete (40) == 1) {
		printf("Data Deleted!\n");
	} else {
		printf("Data not found is hash_table!\n");
	}
	if (delete (100) == 1) {
		printf("Data Deleted!\n");
	} else {
		printf("Data not found in hash_table!\n");
	}

	return EXIT_SUCCESS;
}