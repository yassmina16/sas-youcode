#include <stdio.h>

void printArray() {
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) 
    printf("%d\n", arr[i]);
}

int main() {
    printArray();
    return 0;
}