#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = (int*)malloc(4 * sizeof(int));
    if (arr == NULL) return 1;

    for (int i = 0; i < 4; i++) {
        printf("%d번째 값 입력: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("입력한 값: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
