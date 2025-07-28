#include <stdio.h>

int main() {
    FILE* fp = fopen("alphabet.txt", "w");
    if (fp == NULL) {
        perror("���� ���� ����");
        return 1;
    }

    for (char c = 'A'; c <= 'Z'; c++) {
        fputc(c, fp);
    }
    printf("���� alphabet.txt ���� ����\n");

    fclose(fp);
    return 0;
}
