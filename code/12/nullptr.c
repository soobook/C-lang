#include <stdio.h>

int main(void)
{
	int data = 10;
	int* p1 = NULL, * p2 = &data;

	printf("%d\n", data);
	printf("%p %p\n", p1, p2);

	//int *p3, data2;
	//printf("%p\n", p3); //int * ���� ������ ������ ����
	//printf("%d\n", data2); //int ���� ������ ������ ����

	return 0;
}