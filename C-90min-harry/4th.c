#include <stdio.h>
                       //    53:00
int main()
{
    printf("--- Decision making in C ---\n");
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You cannot drive!");
    }
    else if (age > 65)
    {
        printf("Sorry you are over age!");
    }
    else
    {
        printf("You are eligible for drive!");
    }
}