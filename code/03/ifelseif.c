#include <stdio.h>

int main(void)
{
	double gpa;
	gpa = 4.4;

	if (gpa >= 4.3)
		printf("�ֿ��\n");
	else if (gpa >= 3.8)
		printf("���\n");
	else if (gpa >= 3.0)
		printf("���\n");
	else
		printf("3.0 �̸�\n");

	return 0;
}
