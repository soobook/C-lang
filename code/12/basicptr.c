#include <stdio.h>

int main() {
    int x = 10;
    int* p = &x;

    *p = 25;

    printf("x�� ��: %d\n", x);  // ���: 25

    return 0;
}
