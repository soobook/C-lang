#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = (int*)malloc(4 * sizeof(int));
    if (arr == NULL) return 1;

    for (int i = 0; i < 4; i++) {
        printf("%d��° �� �Է�: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("�Է��� ��: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
