#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// 학생 정보 구조체 정의
typedef struct {
    int id;
    char name[20];
    float score;
} Student;

int main() {
    // 저장할 학생 데이터
    Student s1 = { 1001, "Alice", 91.5 };

    // 1. 구조체 데이터를 파일에 저장
    FILE* fp = fopen("student.bin", "wb");  // 바이너리 쓰기 모드
    if (fp == NULL) {
        perror("파일 열기 실패");
        return 1;
    }

    fwrite(&s1, sizeof(Student), 1, fp);  // 구조체 1개 저장
    fclose(fp);

    // 2. 저장된 데이터를 다시 읽기
    Student s2;
    fp = fopen("student.bin", "rb");  // 바이너리 읽기 모드
    if (fp == NULL) {
        perror("파일 열기 실패");
        return 1;
    }

    fread(&s2, sizeof(Student), 1, fp);  // 구조체 1개 읽기
    fclose(fp);

    // 읽어온 데이터 출력
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Score: %.1f\n", s2.score);

    return 0;
}

