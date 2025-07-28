#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node n1, n2;
    n1.data = 10;
    n2.data = 20;

    n1.next = &n2;  // n1 → n2 연결
    n2.next = NULL;

    printf("n1 데이터: %d\n", n1.data);
    printf("n1이 가리키는 다음 노드 데이터: %d\n", n1.next->data);
    return 0;
}
