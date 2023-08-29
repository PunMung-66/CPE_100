#include <stdio.h>

int main()
{
    int num, num2;
    printf("Input:");
    scanf("%d", &num);
    num2 = num;
    for (int i = 0; i < num; i++)
    {
        for (int a = 0; a < (num - i) ; a++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf(" *");
        printf("\n\n");
    }
    return (0);
}