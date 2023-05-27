
#include <stdio.h>

int main()
{
    printf("\n******** Rules for creating variables ******");

    int somName;     // This is the veriables declaration.
    somName = 8;     // This is the veriables initialization.
    char five = '5'; // This is the veriables declaration and initialization.
    const int i = 9; // const veriable read only.

    printf("\n******** Types of Operators in C ******\n");

    // Arithmetic Operators
    int a = 5, b = 2, c = 3;
    printf("The sum of a and b is %d\n", a+b);
    printf("The difference of a and b is %d\n", a-b);
    printf("The multification of a and b is %d\n", a*b);
    printf("The division of a and b is %d\n", a/b);
    printf("The modulo of a and b is %d\n", a%b);
    printf("The modulo of a and b is %d\n", a%b);
    printf("The increment of a is %d\n", ++a);
    printf("The decrement of b is %d\n",--b);

    // Relational Operators.
        int som = 2, harvy = 3;
        printf("false = %d\n", som == harvy);
        printf("true = %d\n", som != harvy);
        printf("false = %d\n", som > harvy);
        printf("true = %d\n", som < harvy);
        printf("true = %d\n", som <= harvy);
        printf("false = %d\n", som >= harvy);

    
    return 0;
}