#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

int main() {
    Node* n1 = createNode(10);
    Node* n2 = createNode(20);
    n1->next = n2;

    printf("n1: %d\n", n1->data);
    printf("n2: %d\n", n1->next->data);

    free(n1);
    free(n2);
    return 0;
}
