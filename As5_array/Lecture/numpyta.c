#include <stdio.h>

// unfinished
int main()
{
    int num, k, j = 1, p = 0;
    printf("Input: ");
    scanf("%d", &num);
    k = num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < (2*k-1)/2; j++)
            printf("  ");
        k--;
        for (int a = 1; a <= 2*i-1; a++)
        {
            if (j > j + p)
            {
                printf("%d ", j + p);
                p++;
            }
            else if (j == j + p)
            {
                printf("%d ", j + p);
                p++;
            }

        }
        j++;
        printf("\n");
    }
    
    return (0);
}