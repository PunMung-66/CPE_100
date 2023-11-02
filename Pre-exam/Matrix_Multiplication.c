#include <stdio.h>

int check_rc(int row, int col, int error)
{
    if (!(1 <= row && row <= 100))
        error = 1;
    if (!(1 <= col && col <= 100))
        error = 1;
    return (error);
}

int main()
{
    int row, col, row2, col2, error = 0;
    scanf("%d %d", &row, &col);
    error = check_rc(row, col, error);
    int mat1[row][col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &mat1[i][j]);

    scanf("%d %d", &row2, &col2);
    error = check_rc(row2, col2, error);
    int mat2[row2][col2];
    for (int i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            scanf("%d", &mat2[i][j]);
    if (col != row2 || error == 1)
    {
        printf("ERROR");
        return (0);
    }
        int ans[row][col2];
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col2; j++)
                ans[i][j] = 0;
        
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int a = 0; a < col; a++)
                    ans[i][j] += mat1[i][a] * mat2[a][j];
            }
        }
        

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d", ans[i][j]);
                if (j != col2 - 1 )
                    printf(" ");
            }
            if (i != row - 1)
                printf("\n");
        }
    return (0);
}
//Punnwat Mungalarungsi 66070503436