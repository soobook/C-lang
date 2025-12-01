#include <stdio.h>

int main() {
    int data[6] = { 12, 5, 22, 9, 30, 17 };
    int max = data[0];

    for (int i = 1; i < 6; i++) {
        if (data[i] > max)
            max = data[i];
    }

    printf("Maximum value = %d\n", max);  // 출력: 30

    return 0;
}
