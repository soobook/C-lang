#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int intpow(int m, int n);

int main(void)
{
	int m, n;

	printf("���� m�� n�� �����մϴ�.\n");
	printf("���� m n�� ��� �Է� >>> ");
	scanf("%d %d", &m, &n);

	//�Լ�ȣ��
	printf("\n%d�� %d ������ %d�Դϴ�.\n", m, n, intpow(m, n));

	return 0;
}

int intpow(int m, int n)
{
	int mult = 1, i = 1;

	for (i = 1; i <= n; i++) {
		mult *= m;
	}

	return mult;
}
