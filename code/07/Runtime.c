#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x;
    printf("���ڸ� �Է��ϼ���: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("0���� ���� �� �����ϴ�. �ٸ� ���ڸ� �Է��� �ּ���.\n");
    }
    else {
        printf("���: %d\n", 100 / x);
    }

    return 0;
}
