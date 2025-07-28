#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int scores[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("You entered: %d, %d, %d\n", scores[0], scores[1], scores[2]);

    return 0;
}
