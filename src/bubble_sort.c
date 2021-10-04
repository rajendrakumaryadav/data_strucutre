/*
 Created by rajendrayadav on 01/10/21.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int main() {
    int arr[MAX_SIZE] = {40, 20, 120, 300, 90};

    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < i; j++) {
            arr[i] = arr[i+j];
        }
    }

    for (int i = 0; i < MAX_SIZE; ++i) {
        printf("%d", arr[i]);
    }

    return EXIT_SUCCESS;
}


