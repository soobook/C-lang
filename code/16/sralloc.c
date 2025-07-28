#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 100;
    head -> next = second;

    second -> data = 200;
    second -> next = NULL;

    printf("ù ��° ���: %d\n", head->data);
    printf("�� ��° ���: %d\n", head->next->data);

    free(head);
    free(second);
    return 0;
}
