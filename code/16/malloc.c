#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = (int*)malloc(5 * sizeof(int));
    if (arr == NULL) return 1;

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
