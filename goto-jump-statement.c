#include <stdio.h>

int main()
{
    int count = 0;

loop:
    printf("Count: %d\n", count);
    count++;

    if (count < 10) 
    {
        goto loop;
    }
    return 0;
}