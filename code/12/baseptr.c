#include <stdio.h>

int main() {
    int num = 42;
    int* ptr = &num;

    printf("num�� ��: %d\n", num);
    printf("num�� �ּ�: %p\n", &num);
    printf("ptr�� ����Ű�� �ּ�: %p\n", ptr);
    printf("ptr�� ����Ű�� ��: %d\n", *ptr);

    return 0;
}
