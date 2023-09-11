#include <stdio.h>

int factorial(int i)
{
    int fact = 1;
    for (int a = 2; a <= i; a++)
        fact *= a;
    return (fact);
}

int C_nr(int n, int r)
{
    n = factorial(n) / (factorial(n-r) * factorial(r));
    return (n);
}

int main()
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int a = 1; a < num - i; a++)
            printf("\t");
        for (int j = 0; j <= i; j++)
            printf("%d\t\t", C_nr(i , j));
        printf("\n");
    }
    return (0);
}