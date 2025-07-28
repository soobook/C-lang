#include <stdio.h>

struct Node {
    int data;
    struct Node* next;  // 자기 참조
};

int main() {
    struct Node n1;
    n1.data = 10;
    n1.next = NULL; // 아직 연결할 건 없음

    printf("데이터: %d\n", n1.data);
    return 0;
}
