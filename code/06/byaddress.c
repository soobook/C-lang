#include <stdio.h>

void addBonus(int* score) {
    *score = *score + 10;
}

int main() {
    int myScore = 75;

    printf("Before bonus: myScore = %d\n", myScore);  // myScore = 75
    addBonus(&myScore);
    printf("After bonus: myScore = %d\n", myScore);  // myScore = 85

    return 0;
}
