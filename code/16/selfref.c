#include <stdio.h>

struct Node {
    int data;
    struct Node* next;  // �ڱ� ����
};

int main() {
    struct Node n1;
    n1.data = 10;
    n1.next = NULL; // ���� ������ �� ����

    printf("������: %d\n", n1.data);
    return 0;
}
