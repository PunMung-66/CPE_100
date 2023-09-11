#include <stdio.h>

int main()
{
    int num, plus = 0, count = 0, a;
    printf("Input: ");
    scanf("%d", &num);
    for (int start = 1; start <= num; start ++)
    {
        for (int i = 0; i < num - start; i++)
            printf("\t");
        for (a = start; a <= start + plus; a++)
            printf("%d\t", a);
        for(a -= 2; a >= start; a--)
            printf("%d\t", a);
        printf("\n");
        plus++;
    }
    return(0);    
}