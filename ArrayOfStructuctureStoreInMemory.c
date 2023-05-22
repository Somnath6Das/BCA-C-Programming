#include<stdio.h>

struct book{
    char title[5];
    int year;
    double price;

};
int main() {
    struct book b1 = {"Book1", 1988, 4.51};
    printf("Address of title = %u\n", &b1.title);
    printf("Address of year = %u\n", &b1.year);
    printf("Address of price = %u\n", &b1.price);
    printf("Size of b1 = %d\n", sizeof(b1));
}