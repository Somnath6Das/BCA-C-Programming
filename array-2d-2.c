#include <stdio.h>
#define ROW 2
#define COL 3

int main()
{
    int mat1[ROW][COL], mat2[ROW][COL], mat3[ROW][COL];
    int i, j;

    printf("Enter first matrix: \n\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            printf("Enter a[%d][%d]:", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("\nEnter Second matrix:\n\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            printf("Enter a [%d][%d]:", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
}
