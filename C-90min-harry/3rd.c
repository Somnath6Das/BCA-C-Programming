#include <stdio.h>

int main()
{
   
    printf("address of operators - &");
    int num1;
    int num2;
    // Address of operator - &
    printf("\nEnter first the value: ");
    scanf("%d", &num1);
     printf("\nEnter Second the value: ");
    scanf("%d", &num2);
    printf("\nyou entered %d and %d", num1, num2);
    printf("\nEntered value convert into float called type casting %f", (float) num1 / num2);


}