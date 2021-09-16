#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int binary_search(int arr[], int key, int start, int end)
{
	int mid;
	while (start <= end) {
		mid = (start + end) / 2;
		if (arr[mid] == key) {
			return 1;
		}
		if (arr[mid] < key)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return 0;
}

void printData(int arr[])
{
	for (int i = 0; i < SIZE; i++) {
		printf("%d", arr[i]);
		if (i != (SIZE - 1))
			printf(", ");
	}
	printf("\n");
}
void printMessage(int response, int key)
{
	if (response == 1) {
		printf("Key {%d} Found!", key);
	} else {
		printf("Key {%d} Not Found!", key);
	}
	printf("\n");
}

int main()
{
	int data[] = { 1, 20, 23, 26, 55 };
	int key = 20;
	printData(data);
	printMessage(binary_search(data, key, 0, SIZE), key);
	printMessage(binary_search(data, 66, 0, SIZE), 66);
	printMessage(binary_search(data, 23, 0, SIZE), 23);
	printf("\n");
	return 0;
}