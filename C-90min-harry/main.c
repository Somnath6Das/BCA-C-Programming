#include <stdio.h>

// 27 min complete.
struct Point
{
    int x, y;
} p1;

int main()
{
    // int, float, char
    int a = 7; // 2 to 4 bytes
    unsigned short integer = 10;
    long integer1 = 6;
    short integer2 = 7;

    float b = 8.0;                    // 4 bytes - 6 decimal precision
    double myfloat1 = 7.45;           // 8 bytes - 15 decimal places precision
    long double myflot2 = 7.43453455; // 10 bytes - 19 decimal places precision
    char c = 't';                     // 1 byte

    printf("int %d\n", a);
    printf("float %f\n", b);
    printf("char %c\n", c);

    printf("The size taken by int is %d bytes\n", sizeof(int));
    printf("The size taken by char is %d bytes\n", sizeof(char));
    printf("The size taken by unsigned int is %d bytes\n", sizeof(unsigned int));
    printf("The size taken by double is %d bytes\n", sizeof(double));
    printf("The size taken by long double is %d bytes\n", sizeof(long double));
    printf("The size taken by float is %f bytes\n", sizeof(float));

    return 0;
}