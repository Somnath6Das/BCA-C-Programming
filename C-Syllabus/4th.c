#include<stdio.h>

void main() {
int x = 55, y = 33;
printf("\n%3d", x-y);    // 1 space
printf("\n%6d", x-y);    // 4 space
printf("\n%10s", "abcdef"); // 4 space
printf("\n%4s", "abcdef");  // 0 space
}

// Formatted function