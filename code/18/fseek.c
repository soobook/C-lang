#include <stdio.h>

int main() {
    FILE* fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        perror("���� ���� ����");
        return 1;
    }

    // ���� �����͸� 5����Ʈ ���� ��ġ�� �̵� (���� ó�� ����)
    fseek(fp, 5, SEEK_SET);

    // �� ��ġ���� ���� 1�� �б�
    int ch = fgetc(fp);
    if (ch != EOF) {
        printf("5��° ����Ʈ ��ġ�� ����: %c\n", ch);
    }
    else {
        printf("���� �б� ���� �Ǵ� ���� ��\n");
    }

    fclose(fp);
    return 0;
}
