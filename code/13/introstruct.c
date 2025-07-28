#include <stdio.h>

struct Student {
    int id;
    char name[20];
    double gpa;
};

int main() {
    struct Student s1 = { 2023001, "Alice", 3.85 };

    printf("ID: %d, Name: %s, GPA: %.2f\n", s1.id, s1.name, s1.gpa);
    
    return 0;
}
