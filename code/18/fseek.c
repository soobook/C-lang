#include <stdio.h>

int main() {
    FILE* fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        perror("파일 열기 실패");
        return 1;
    }

    // 파일 포인터를 5바이트 앞의 위치로 이동 (파일 처음 기준)
    fseek(fp, 5, SEEK_SET);

    // 그 위치에서 문자 1개 읽기
    int ch = fgetc(fp);
    if (ch != EOF) {
        printf("5번째 바이트 위치의 문자: %c\n", ch);
    }
    else {
        printf("문자 읽기 실패 또는 파일 끝\n");
    }

    fclose(fp);
    return 0;
}
