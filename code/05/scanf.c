#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int	month = 0;
	printf("1년은 몇 달? ");
	scanf("%d", &month); 
	printf("1년은 %d달\n\n", month);

	return 0;
}
