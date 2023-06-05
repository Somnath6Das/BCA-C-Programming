#include <stdio.h>
#include<string.h>

struct Books
{
    char name[50];
    char auther[50];
    int price;
} book;

void printStruct(struct Books bk)
{
    printf("Book name is %s\n", bk.name);
    printf("Author name is %s\n", bk.auther);
    printf("Price is %d\n", bk.price);
};

int main()
{
    struct Books bk1, bk2;
    strcpy(bk1.name, "C Progmamming");
    strcpy(bk1.auther, "Dennis Rechi");
    bk1.price = 78;

    strcpy(bk2.name, "Java Script");
    strcpy(bk2.auther, "ES6");
    bk2.price = 105;

    printStruct(bk1);
    printStruct(bk2);

    return 0;
}