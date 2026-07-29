#include <stdio.h>

struct Rectangle{
    float length;
    float breadth;
};

int main(){
    struct Rectangle r;

    printf("Enter Length and Breadth:\n");
    scanf("%f %f",&r.length,&r.breadth);

    printf("Area = %.2f\n",r.length*r.breadth);
    printf("Perimeter = %.2f\n",2*(r.length+r.breadth));

    return 0;
}