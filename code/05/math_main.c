// main.c
#include <stdio.h>
#include "math_utils.h"

int main() {
    int x = 5, y = 3;

    printf("덧셈: %d\n", add(x, y));
    printf("곱셈: %d\n", multiply(x, y));

    return 0;
}
