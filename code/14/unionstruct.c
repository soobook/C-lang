#include <stdio.h>

union Value {
    int i;
    float f;
};

struct Data {
    int type; // 0 = int, 1 = float
    union Value val;
};

int main() {
    struct Data d;
    d.type = 0;
    d.val.i = 100;

    if (d.type == 0) {
        printf("Int: %d\n", d.val.i);
    }
    else {
        printf("Float: %.2f\n", d.val.f);
    }

    return 0;
}
