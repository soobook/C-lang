#include <stdio.h>

typedef union {
    int i;
    float f;
    char str[20];
} Value;

int main() {
    Value v;

    v.i = 100;
    printf("정수형 값: %d\n", v.i);

    v.f = 2.71;
    printf("실수형 값: %.2f\n", v.f);

    typedef Value myval;
    myval a = {50};
    printf("정수형 값: %d\n", a.i);

    return 0;
}
