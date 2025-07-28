#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* fp = fopen("one.txt", "r");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    int num;
    fscanf(fp, "%d", &num);
    printf("읽은 정수: %d\n", num);

    fclose(fp);
    return 0;
}