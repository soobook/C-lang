#include <stdio.h>

int main(void)
{
	int n;
	n = 10;

	if (n % 2 == 0) 
	{
		printf("¦��\n");
	} else
	{
		printf("Ȧ��\n");
	}

	//���ǿ����� �̿�, 0�̸� false�� �ǹ�
	(n % 2) ? printf("Ȧ��\n") : printf("¦��\n");

	return 0;
}

