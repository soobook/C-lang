#include <stdio.h> 

int add(int a, int b);		//int add(int, int)�� ����
int findMax(int, int);		//int findMax(int a, int b)�� ����
void printMin(int, int);	//int printMin(int a, int b)�� ����

int main(void)
{
	int a = 10, b = 15;

	int max = findMax(a, b);
	printf("�ִ�: %d\n", max);
	printf("��: %d\n", add(a, b));

	//��ȯ ���� ���� �Լ�ȣ���� �Ϲݹ���ó�� ���
	printMin(a, b);

	return 0;
}

void printMin(int a, int b)
{
	int min = a < b ? a : b;
	printf("�ּ�: %d\n", min);
}
