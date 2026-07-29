#include <stdio.h>

struct Book{
    int id;
    char title[50];
    char author[50];
    float price;
};

int main(){
    struct Book b;

    printf("Enter Book ID Title Author Price:\n");
    scanf("%d %s %s %f",&b.id,b.title,b.author,&b.price);

    printf("\nBook Details\n");
    printf("ID: %d\n",b.id);
    printf("Title: %s\n",b.title);
    printf("Author: %s\n",b.author);
    printf("Price: %.2f\n",b.price);

    return 0;
}