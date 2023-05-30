
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

    // Logical Operators.
        int h = 0, j = 1;
        printf("The logical and %d\n", h && j);
        printf("The logical or %d\n", h || j);
        printf("The logical nor of h %d\n", !h);
        printf("The logical nor of j %d\n", !j);
    
    // Bitwise Operator.
    int A = 60, B = 14;
    printf("Bitwise and operator %d\n", A&B);
    printf("Bitwise or operator %d\n", A|B);
    printf("Bitwise xor operator %d\n", A^B);
    printf("Bitwise oncs compliment operators operator %d\n", ~B);
    printf("Bitwise left shift operator %d\n", A<<B);
    printf("Bitwise right shift operator %d\n", A<<B);

    // Assignment operators
    int v = 9;
    v += 9;
    printf("v value is %d\n", v);
    v -= 9;
    printf("v value is %d\n", v);
    v *=9;
    printf("v value is %d\n", v);
    v %= 9;
    printf("v value is %d\n", v);
    
   
    
    
    return 0;
}