#include <stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Student{
    int roll;
    char name[50];
    struct Date dob;
};

int main(){
    struct Student s;

    printf("Enter Roll Name:\n");
    scanf("%d %s",&s.roll,s.name);

    printf("Enter DOB (dd mm yyyy):\n");
    scanf("%d %d %d",&s.dob.day,&s.dob.month,&s.dob.year);

    printf("\nStudent Details\n");
    printf("Roll: %d\n",s.roll);
    printf("Name: %s\n",s.name);
    printf("DOB: %02d/%02d/%04d\n",
           s.dob.day,s.dob.month,s.dob.year);

    return 0;
}