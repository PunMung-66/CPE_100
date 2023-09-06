#include <stdio.h>

int main()
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int a = 1; a <= i; a++)
            printf("%d", a);
        printf("\n");
    }
    
    return (0);
}