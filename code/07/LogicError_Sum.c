#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    for (i = 1; i <= 10; i++); {  // �����ݷ� ����
        sum += i;
    }

    printf("1���� 10������ ��: %d\n", sum);
    return 0;
}
