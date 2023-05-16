#include<stdio.h>

#define SIZE 10

int main(){ 
int my_arr[SIZE] = {34, 56, 78, 25, 43, 71, 89, 34, 70, 91};
int i, max, min;
printf("index[0] = %d\n", my_arr[0]);
max = min = my_arr[0];

for(i=0; i<SIZE; i++){
if(my_arr[i]> max){
    max = my_arr[i];
}
if(my_arr[i] <min){
    min = my_arr[i];
}
}
printf("Lowest value = %d\n", min);
printf("Highest value = %d", max);
return 0;
}