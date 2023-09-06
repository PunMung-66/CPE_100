#include <stdio.h>

int main()
{
    int num, k;
    printf("Input: ");
    scanf("%d", &num);
    k = num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < (2*k-1)/2; j++)
            printf(" ");
        k--;
        for (int a = 1; a <= 2*i-1; a++)
            printf("*");
        printf("\n");
    }
    
    return (0);
}