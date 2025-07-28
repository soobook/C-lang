#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// �л� ���� ����ü ����
typedef struct {
    int id;
    char name[20];
    float score;
} Student;

int main() {
    // ������ �л� ������
    Student s1 = { 1001, "Alice", 91.5 };

    // 1. ����ü �����͸� ���Ͽ� ����
    FILE* fp = fopen("student.bin", "wb");  // ���̳ʸ� ���� ���
    if (fp == NULL) {
        perror("���� ���� ����");
        return 1;
    }

    fwrite(&s1, sizeof(Student), 1, fp);  // ����ü 1�� ����
    fclose(fp);

    // 2. ����� �����͸� �ٽ� �б�
    Student s2;
    fp = fopen("student.bin", "rb");  // ���̳ʸ� �б� ���
    if (fp == NULL) {
        perror("���� ���� ����");
        return 1;
    }

    fread(&s2, sizeof(Student), 1, fp);  // ����ü 1�� �б�
    fclose(fp);

    // �о�� ������ ���
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Score: %.1f\n", s2.score);

    return 0;
}
