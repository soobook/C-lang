#include <stdio.h>

int main() {
    FILE* fp = fopen("score.txt", "w");
    if (fp == NULL) {
        perror("파일 열기 실패");
        return 1;
    }

    int id = 1239876;
    char name[] = "Kim";
    float score = 95.5;

    fprintf(fp, "ID: %d\nName: %s\nScore: %.1f\n", id, name, score);
    printf("파일 score.txt 쓰기 성공\n");

    fclose(fp);
    return 0;
}
