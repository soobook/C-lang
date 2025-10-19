#include <stdio.h>
#include <errno.h>

int main() {
    FILE* fp = fopen("alphabet.txt", "w");
    if (fp == NULL) {
        perror("파일 열기 실패");
        return 1;
    }

    for (char c = 'A'; c <= 'Z'; c++) {
        fputc(c, fp);
    }
    printf("파일 alphabet.txt 쓰기 성공\n");

    fclose(fp);
    return 0;
}

