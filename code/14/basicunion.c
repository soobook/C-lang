#include <stdio.h>

typedef union {
    int i;
    float f;
    char str[20];
} Value;

int main() {
    Value v;

    v.i = 100;
    printf("������ ��: %d\n", v.i);

    v.f = 2.71;
    printf("�Ǽ��� ��: %.2f\n", v.f);

    typedef Value myval;
    myval a = {50};
    printf("������ ��: %d\n", a.i);

    return 0;
}
