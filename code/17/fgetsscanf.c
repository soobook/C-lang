#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("파일 열기 실패!\n");
        return 1;
    }

    char line[100];
    char name[50];
    int age;

    while (fgets(line, sizeof(line), fp) != NULL) {
        sscanf(line, "%s %d", name, &age);
        printf("이름: %s, 나이: %d\n", name, age);
    }

    fclose(fp);
    return 0;
}
