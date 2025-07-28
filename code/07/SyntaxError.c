#include <stdio.h>

int main() {
    // 다음 세미콜론 빠짐 → 컴파일 오류 발생
    printf("프로그램 시작!\n")
    printf("여기서 오류 발생!\n");

    return 0;
}
