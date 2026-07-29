#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[3];

    for(int i=0;i<3;i++){
        printf("Enter ID Name Salary:\n");
        scanf("%d %s %f",&e[i].id,e[i].name,&e[i].salary);
    }

    printf("\nEmployee Records\n");
    for(int i=0;i<3;i++){
        printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].salary);
    }

    return 0;
}