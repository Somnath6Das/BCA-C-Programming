#include<stdio.h>

struct Student {
    int *ptr;
    char *name;
}s1;

int main() {
    int roll = 20;
    s1.ptr = &roll;
    s1.name = "Pritesh";
    printf("\nRoll Number of Student: %d", *s1.ptr);
    printf("\nName of Student: %s", s1.name);

    return 0;
}