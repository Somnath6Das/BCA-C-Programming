#include <stdio.h>
#define ROW 2
#define COL 3

int main()
{
    int mat1[ROW][COL], mat2[ROW][COL], mat3[ROW][COL];
    int i, j;

    printf("Enter first matrix: \n\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Enter variable value for mat1[%d][%d]:", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter Second matrix:\n\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("Enter variable value for mat2[%d][%d]:", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // add mat1 and mat2
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\nResultant array of mat3 is: \n\n");

    // print resulktant array
    for (i = 0; i < ROW; i++)
    {
      for(j = 0; j< COL; j++) {
        printf("%5d", mat3[i][j]);
      }
      printf("\n");
    }
    return 0;
}
