#include <stdio.h>

int main() {
    int data[2][3] = { {7, 8, 9}, {1, 2, 3} };
    int (*p)[3] = data;  // 포인터 p는 3열짜리 int 배열을 가리킴

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(p + i) + j));  // 포인터를 통한 배열 접근
        }
        printf("\n");
    }

    return 0;
}
