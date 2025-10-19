#include <stdio.h>
#include <errno.h>

int main() {
    FILE* fp = fopen("message.txt", "w");
    if (fp == NULL) {
        perror("파일 열기 실패");
        return 1;
    }

    fputs("Hello, world!\n", fp);
    fputs("This is a test message.\n", fp);
    printf("파일 message.txt 쓰기 성공\n");

    fclose(fp);
    return 0;
}

