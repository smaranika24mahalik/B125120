#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int age;
    float cgpa;
};

int main() {
    struct Student s;

    printf("Enter Roll, Name, Age, CGPA:\n");
    scanf("%d %s %d %f", &s.roll, s.name, &s.age, &s.cgpa);

    printf("\nStudent Details\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("CGPA: %.2f\n", s.cgpa);

    return 0;
}