#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("���� ���� ����!\n");
        return 1;
    }

    int num;
    while (fscanf(fp, "%d", &num) != EOF) {
        printf("���� ��: %d\n", num);
    }

    fclose(fp);
    return 0;
}
