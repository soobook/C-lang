#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	//�л��� ���� ����ü 
	struct student
	{
		int snum;		//�й�
		char* dept;		//�а� �̸�
		char name[12];	//�л� �̸�
	};
	struct student hong = { 202200001, "��ǻ���������а�", "ȫ�浿" };
	struct student na = { 202200002 };
	struct student you = { 202200003 };

	//�л��̸� �Է�
	scanf("%s", na.name);

	na.dept = "��ǻ���������а�";
	you.dept = "�����а�";
	strcpy(you.name, "ȫ�浿");

	printf("[%d, %s, %s]\n", hong.snum, hong.dept, hong.name);
	printf("[%d, %s, %s]\n", na.snum, na.dept, na.name);
	printf("[%d, %s, %s]\n\n", you.snum, you.dept, you.name);

	struct student one;
	one = you;
	if (one.snum == you.snum)
		printf("�й��� %d�� �����մϴ�.\n", one.snum);

	return 0;
}
