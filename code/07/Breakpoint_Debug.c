#include <stdio.h>

int main() {
    int a = 5, b = 10, result;

    // 중간값 추적하며 브레이크포인트 실습
    result = a * b;
    result += 10;
    result /= 3;

    printf("최종 결과: %d\n", result); 

    return 0;
}
