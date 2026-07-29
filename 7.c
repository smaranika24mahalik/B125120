#include <stdio.h>

struct Student{
    int roll;
    char name[50];
    int c,math,physics;
};

int main(){
    struct Student s;
    int total;
    float avg;

    printf("Enter Roll Name C Math Physics:\n");
    scanf("%d %s %d %d %d",&s.roll,s.name,&s.c,&s.math,&s.physics);

    total=s.c+s.math+s.physics;
    avg=total/3.0;

    printf("Total = %d\n",total);
    printf("Average = %.2f\n",avg);

    return 0;
}