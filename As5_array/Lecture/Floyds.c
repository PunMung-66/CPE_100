#include <stdio.h>

int main()
{
    int num, j = 1;
    printf("Input: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int a = 1; a <= i; a++, j++)
            printf("%d ", j);
        printf("\n");
    }
    
    return (0);
}