#include <stdio.h>

int main()
{
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);
    int conditional = age > 3 ? 100 : 200;
    printf("%d", conditional);
}