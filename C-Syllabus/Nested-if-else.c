#include<stdio.h>

int main() {
    int num;
    printf("Enter integer: ");
     scanf("%d", &num);
    if(num<10){
        if(num==1){
            printf("The value is:%d\n", num);
        }else {
            printf("The value is grater then 1");
        }
    }
    else {
        printf("The value is grater then 10");
    }
    return 0;
}