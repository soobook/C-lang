#include <stdio.h>

int main() {
    int x = 10;
    int* p = &x;

    *p = 25;

    printf("x의 값: %d\n", x);  // 출력: 25

    return 0;
}
