#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("�迭 ũ�� �Է�: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) return 1;

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
