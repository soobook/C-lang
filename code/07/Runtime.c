#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x;
    printf("숫자를 입력하세요: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("0으로 나눌 수 없습니다. 다른 숫자를 입력해 주세요.\n");
    }
    else {
        printf("결과: %d\n", 100 / x);
    }

    return 0;
}
