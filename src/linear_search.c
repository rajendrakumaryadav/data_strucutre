#include <stdio.h>

#define SIZE 5
int LinearSearch(int arr[], int key)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return -1;
}
void printData(int arr[])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d", arr[i]);
        if (i != (SIZE - 1))
            printf(", ");
    }
    printf("\n");
}
int main()
{
    int pageNumbers[SIZE] = {50, 61, 20, 12, 2};
    int key = 20;

    printData(pageNumbers);

    if (LinearSearch(pageNumbers, key) == 1)

        printf("Key {%d} is found!", key);
    else
        printf("Key {%d} is not exists!", key);

    printf("\n");

    return 0;
}