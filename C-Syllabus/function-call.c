#include<stdio.h>

void increment(int *var) {
    *var = *var + 1;
}
int main(){
    int num = 20;
    increment(&num);
    printf("value of the num: %d", num);
    return 0;
}