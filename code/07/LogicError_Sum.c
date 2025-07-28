#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    for (i = 1; i <= 10; i++); {  // 세미콜론 오류
        sum += i;
    }

    printf("1부터 10까지의 합: %d\n", sum);
    return 0;
}
