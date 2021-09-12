#include <stdio.h>
#define MAX_SIZE 3
int top = -1;
int arr[MAX_SIZE];
void push(int val) {
    if (top == MAX_SIZE - 1) {
        printf("%s\n", "Stack is full!\n");
    } else {
        ++top;
        arr[top] = val;
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}