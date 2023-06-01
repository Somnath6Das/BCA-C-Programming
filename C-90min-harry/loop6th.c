#include <stdio.h>

int main()
{
    printf("------while loop------\n");
    int index = 0;

    while (index < 10)
    {
        printf("%d\n", index);
        index++;
    }


    printf("------for loop------\n");
    for (int j = 0; j < 40; j++)
    {
        printf("%d\n", j);
    }


    printf("------do while loop------\n");
    int k = 1;
    do
    {
        printf("do while will run one time.\n");
    } while (k>100);
    
    return 0;
}