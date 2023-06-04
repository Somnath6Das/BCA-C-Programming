#include<stdio.h>

int main() {
    int a = 98;
    printf("%d\n", a);
    int* ptr = NULL;
    printf("%d\n", ptr);
    if(!ptr) {
        printf("pointer is not null\n");
    }
    ptr = &a;
   *ptr = 188;
   printf("%d\n", a);
  
}