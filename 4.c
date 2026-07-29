#include <stdio.h>

struct Product{
    int id;
    char name[50];
    float price;
    int quantity;
};

int main(){
    struct Product p;

    printf("Enter Product ID Name Price Quantity:\n");
    scanf("%d %s %f %d",&p.id,p.name,&p.price,&p.quantity);

    printf("Total Cost = %.2f\n",p.price*p.quantity);

    return 0;
}