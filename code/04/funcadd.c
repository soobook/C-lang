#include <stdio.h> 

//int add(int a, int b);	//�� ��ġ�� ����

int main(void)
{
	int a = 3, b = 5;
	int add(int a, int b);	//int add(int, int) ������

	//�� �Լ������� ������ �Լ�ȣ�⿡�� ��� �߻�
	int sum = add(a, b);
	printf("��: %d\n", sum);

	return 0;
}

//�Լ� add�� �Լ����� �Ǵ� �Լ����� �κ�
int add(int a, int b)
{
	int sum = a + b;

	return (sum); //��ȣ�� ���� ����
}

//�� main() �Լ����� ȣ���� �����Ƿ� �� �Լ������� ������� ����
int findMin(int x, int y)
{
	int min = x < y ? x : y;

	return (min);
}
