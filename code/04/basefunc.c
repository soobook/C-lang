#include <stdio.h> 

void message();	//�Լ� ����

int main(void)
{
	puts("���� �Լ� �����Դϴ�.");
	message(); //�Լ� message ȣ��
	puts("���� �Լ� �����Դϴ�.");

	return 0;
}

//�Լ� message ����
void message()
{
	puts("\t�޽����Դϴ�.");
}