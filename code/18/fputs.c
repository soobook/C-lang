#include <stdio.h>

int main() {
    FILE* fp = fopen("message.txt", "w");
    if (fp == NULL) {
        perror("���� ���� ����");
        return 1;
    }

    fputs("Hello, world!\n", fp);
    fputs("This is a test message.\n", fp);
    printf("���� message.txt ���� ����\n");

    fclose(fp);
    return 0;
}
