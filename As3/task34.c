#include <stdio.h>

int main()
{
    int num, j = 2, i = 2;
    printf("Input:");
    scanf("%d", &num);
    while (j <= num && num > 1)
    {
        while (j % i != 0)
            i++;
        if(j == i)
            printf("%d\t", i);
        i = 2;
        j++;
    }
    return (0);
}