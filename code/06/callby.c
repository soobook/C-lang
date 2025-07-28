#include <stdio.h>

void increase(int origin, int increment);
void incbyaddress(int* origin, int increment);

int main(void)
{
	int amount = 10;
	increase(amount, 20); //amount�� 20 �������� ����
	printf("%d\n", amount);

	amount = 100;
	incbyaddress(&amount, 20); //&amount: amount�� �ּҷ� ȣ��
	printf("%d\n", amount);

	return 0;
}

void increase(int origin, int increment)
{
	origin += increment;
}
void incbyaddress(int* origin, int increment)
{
	//*orogin�� origin�� ����Ű�� ���� ��ü
	*origin += increment; //�׷��Ƿ� origin�� ����Ű�� ���� ���� 20 ����
}
