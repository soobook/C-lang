#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("x = %d, y = %d\n", x, y);  // x = 10, y = 5
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);  // x = 10, y = 5
    
    return 0;
}
