#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;

	printf("���� �Է�: ");
	scanf("%d", &input);

	printf("�Է� ��: %d\n", input);
	printf("�ּ� ��: %p(16����)\n", &input);
	printf("�ּ� ��: %llu(10����)\n", (uintptr_t)&input);

	printf("�ּ� �� ũ��: %zu\n", sizeof(&input)); //%zd�� ����

	return 0;
}
