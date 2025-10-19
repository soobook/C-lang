#include <stdio.h>
#include <stdlib.h>

int main() {
    int *data = (int*)malloc(5 * sizeof(int));

    if (data == NULL) {
        fprintf(stderr, "메모리 할당 실패!\n");
        exit(1);
    }

    printf("메모리 주소 %p: 동적 메모리 공간 할당과 해제\n", data);
    free(data);

    return 0;
}
