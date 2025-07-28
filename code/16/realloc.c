#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = (int*)malloc(3 * sizeof(int));
    if (arr == NULL) 
        return 1;

    for (int i = 0; i < 3; i++) 
        arr[i] = i + 1;

    arr = (int*)realloc(arr, 6 * sizeof(int));
    if (arr == NULL) 
        return 1;

    for (int i = 3; i < 6; i++) 
        arr[i] = (i + 1) * 10;

    for (int i = 0; i < 6; i++) 
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
