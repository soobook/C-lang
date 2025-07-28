#include <stdio.h>

int main() {
    int num = 42;
    int* ptr = &num;

    printf("num의 값: %d\n", num);
    printf("num의 주소: %p\n", &num);
    printf("ptr이 가리키는 주소: %p\n", ptr);
    printf("ptr이 가리키는 값: %d\n", *ptr);

    return 0;
}
