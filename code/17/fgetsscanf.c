#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("���� ���� ����!\n");
        return 1;
    }

    char line[100];
    char name[50];
    int age;

    while (fgets(line, sizeof(line), fp) != NULL) {
        sscanf(line, "%s %d", name, &age);
        printf("�̸�: %s, ����: %d\n", name, age);
    }

    fclose(fp);
    return 0;
}
