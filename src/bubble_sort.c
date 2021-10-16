/*
 Created by rajendrayadav on 01/10/21.
*/

#include <stdio.h>
#include <stdlib.h>


void swap(int *pInt, int *pInt1);

void bubble_sort(int arr[], int size) {
    int i, j, flag;
    for (int i = 0; i < size - 1; i++) {
        flag = 0;
        for (j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}

void swap(int *pInt, int *pInt1) {
    int *temp;
    temp = pInt;
    pInt1 = pInt;
    pInt1 = temp;
}

int main() {
    int arr[] = {40, 20, 120, 300, 90, 101};
    int size = sizeof(arr) / sizeof(int);
    bubble_sort(arr, size);

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return EXIT_SUCCESS;
}


