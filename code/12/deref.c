#include <stdio.h>

int main(void)
{
	int i = 100;
	char c = 'A';

	int* pi = &i;
	char* pc = &c;
	printf("�������� ���: %d %c\n", *pi, *pc);

	*pi = 200; //���� i�� *pi�� ���������Ͽ� �� ������ ����
	*pc = 'B'; //���� c�� *pc�� ���������Ͽ� �� ������ ����
	printf("�������� ���: %d %c\n", i, c);

	int data = 1000;
	pi = &data;
	printf("�������� ���: %d %d\n", data, *pi);

	return 0;
}
