#include <stdio.h>

int main() {
    int data[2][3] = { {7, 8, 9}, {1, 2, 3} };
    int (*p)[3] = data;  // ������ p�� 3��¥�� int �迭�� ����Ŵ

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(p + i) + j));  // �����͸� ���� �迭 ����
        }
        printf("\n");
    }

    return 0;
}
