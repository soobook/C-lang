#include <stdio.h>

union Message {
    char ch;
    int intVal;
    float floatVal;
};

int main() {
    union Message msg;

    msg.ch = 'A';
    printf("char: %c\n", msg.ch);

    msg.floatVal = 3.14;
    printf("Float: %.2f\n", msg.floatVal);

    msg.intVal = 42;
    printf("Integer: %d\n", msg.intVal);

    return 0;
}
