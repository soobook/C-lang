#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* fp = fopen("one.txt", "r");
    if (fp == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    int num;
    fscanf(fp, "%d", &num);
    printf("���� ����: %d\n", num);

    fclose(fp);
    return 0;
}