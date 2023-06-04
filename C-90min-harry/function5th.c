#include <stdio.h>

void newPrint(char *char1)
{
    printf("%s\n", char1);
}

int sum(int a, int b)
{
    return a + b;
}
float average(float a, float b)
{
    return (a + b) / 2;
}

int main()
{
    printf("----Function----\n");
    newPrint("hello www\n\n");
    printf("%d\n", sum(10, 5));

    printf("%f", average(12, 15));
    return 0;
}