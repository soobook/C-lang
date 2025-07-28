#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = NULL, input, count = 0;

    printf("정수를 입력하세요 (끝내려면 -1):\n");
    while (1) {
        scanf("%d", &input);
        if (input == -1) break;

        int* temp = realloc(arr, (count + 1) * sizeof(int));
        if (temp == NULL) {
            free(arr);
            return 1;
        }
        arr = temp;
        arr[count++] = input;
    }

    printf("입력된 값들:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
