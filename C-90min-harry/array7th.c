#include <stdio.h>

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // printf("%d", arr[2]);
    
    for (int i = 0; i < 10; i++)
    {
        printf("Enter index value %d\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i< 10; i++)
    {
        printf("The value of index[%d] is = %d\n", i, arr[i]);
    }
    
    return 0;
}