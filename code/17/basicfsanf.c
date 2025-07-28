#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 실패!\n");
        return 1;
    }

    int num;
    while (fscanf(fp, "%d", &num) != EOF) {
        printf("읽은 값: %d\n", num);
    }

    fclose(fp);
    return 0;
}
