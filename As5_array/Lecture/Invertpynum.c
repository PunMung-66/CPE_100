#include <stdio.h>

int main()
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    for (int i = num; i >= 1; --i)
    {
        for (int a = 1; a <= i; a++)
            printf("%d ", a);
        printf("\n");
    }
    return (0);
}