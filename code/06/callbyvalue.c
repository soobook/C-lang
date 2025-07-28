#include <stdio.h>

void addBonus(int score) {
    score = score + 10;
    printf("Inside addBonus: score = %d\n", score);
}

int main() {
    int myScore = 70;

    addBonus(myScore);
    printf("After addBonus: myScore = %d\n", myScore);
    
    return 0;
}
