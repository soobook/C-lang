#include <stdio.h>

int main(void)
{
	int n;
	n = 10;

	if (n % 2 == 0) 
	{
		printf("짝수\n");
	} else
	{
		printf("홀수\n");
	}

	//조건연산자 이용, 0이면 false를 의미
	(n % 2) ? printf("홀수\n") : printf("짝수\n");

	return 0;
}

