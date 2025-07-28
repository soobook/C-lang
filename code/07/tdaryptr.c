#include <stdio.h>

int main(void)
{
	int ary[][4] = { {10, 20, 30, 40}, {50, 60, 70, 80} }; //2�� 4�� �迭
	int(*ptr)[4] = ary;	 //���� 4�� �迭�� ����Ű�� ������, int *ptr[4]�� ������ �迭

	printf("%zd %zd\n", sizeof(ary), sizeof(ptr));
	printf("%zd %zd\n\n", sizeof(ary[0]), sizeof(ptr[0]));

	printf("%2d %2d\n", **ary, **ptr); //ù ��° ����, 10
	printf("%2d %2d\n", **(ary + 1), *ary[1]); //�� ��° ���� ù ����, 50
	printf("%2d %2d\n", **(ptr + 1), *ptr[1]); //�� ��° ���� ù ����, 50
	printf("%2d %2d\n", *(ary[1] + 1), *(ptr[1] + 1)); //2�� 2��, 60
	printf("%2d %2d\n\n", *(*(ary + 1) + 3), *(*(ptr + 1) + 3)); //2�� 4��, 80

	printf("%2d ", **ptr++); //�迭�� ù ���� 10 ���� ��, ptr�� ���� ������ �ּ� ����
	printf("%2d\n", **ptr); //�� ��° ���� ù ���� 50 ����

	return 0;

	int a[][4] = { {1, 2, 3, 4}, {10, 15, 20, 25}, {50, 60, 70, 80} }; //3�� 4�� �迭
	int(*p)[4] = a;	 //���� 4�� �迭�� ����Ű�� ������, int *p[4]�� ������ �迭
	printf("%2d %2d\n", **(p + 1), **(p + 2));

	return 0;
}
