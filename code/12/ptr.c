#include <stdio.h>

int main(void)
{
	int data = 100;
	int* ptrint;
	ptrint = &data;

	printf("������  �ּҰ�            ���尪\n");
	printf("------------------------------------------\n");
	printf("  data  %p  %d\n", &data, data);
	printf("ptrint  %p  %p\n", &ptrint, ptrint);

	printf("%zu\n", sizeof(ptrint));

	return 0;
}
