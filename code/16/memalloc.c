#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = NULL, input, count = 0;

    printf("������ �Է��ϼ��� (�������� -1):\n");
    while (1) {
        scanf("%d", &input);
        if (input == -1) break;

        int* temp = realloc(arr, (count + 1) * sizeof(int));
        if (temp == NULL) {
            free(arr);
            return 1;
        }
        arr = temp;
        arr[count++] = input;
    }

    printf("�Էµ� ����:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
