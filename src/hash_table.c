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
		printf("Key : %d, index: %d\n", key, index);
		if (index == key) {
			printf("Hash Table full!\n");
			return 0;
		}
	}
	printf("Key : %d, index: %d\n", key, index);
	arr[index] = value;
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
	return EXIT_SUCCESS;
}