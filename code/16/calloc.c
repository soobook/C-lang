#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = (int*)calloc(5, sizeof(int));
    if (arr == NULL) return 1;

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // 모두 0 출력
    }
    printf("\n");

    free(arr);
    return 0;
}
