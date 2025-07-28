#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
    return (int*)malloc(size * sizeof(int));
}

void destroyArray(int* arr) {
    free(arr);
}

int main() {
    int* arr = createArray(5);
    if (arr == NULL) return 1;

    for (int i = 0; i < 5; i++) arr[i] = i;
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");

    destroyArray(arr);
    return 0;
}
