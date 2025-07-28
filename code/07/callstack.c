#include <stdio.h>

void funcA() {
    int x = 10 / 2; 
}

void funcB() {
    funcA();
}

int main() {
    funcB();

    return 0;
}
