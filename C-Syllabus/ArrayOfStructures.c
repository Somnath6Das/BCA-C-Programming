#include<stdio.h>

struct Point
{
    int x, y;
};

int main() {
    // array of structure
    struct Point arr[1];
    
    //Access array members
    arr[0].x = 10;
    arr[0].y = 20;
    
    printf("%d %d", arr[0].x, arr[0].y);

    return 0;
}
