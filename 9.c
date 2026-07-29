#include <stdio.h>

struct Student{
    int roll;
    char name[50];
    float cgpa;
};

int main(){
    struct Student s[5];

    for(int i=0;i<5;i++){
        printf("Enter Roll Name CGPA:\n");
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].cgpa);
    }

    printf("\nStudents with CGPA >= 8.0\n");

    for(int i=0;i<5;i++){
        if(s[i].cgpa>=8.0){
            printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].cgpa);
        }
    }

    return 0;
}