#include <stdio.h>

int main() {
    FILE* fp = fopen("score.txt", "w");
    if (fp == NULL) {
        perror("���� ���� ����");
        return 1;
    }

    int id = 1239876;
    char name[] = "Kim";
    float score = 95.5;

    fprintf(fp, "ID: %d\nName: %s\nScore: %.1f\n", id, name, score);
    printf("���� score.txt ���� ����\n");

    fclose(fp);
    return 0;
}
