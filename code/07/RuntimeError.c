#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x;
    printf("숫자를 입력하세요: ");
    scanf("%d", &x);

    // x가 0일 경우 실행 오류 발생
    printf("결과: %d\n", 100 / x); 
    return 0;
}
