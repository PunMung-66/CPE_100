#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0;
    printf("Input:");
    scanf("%d", &num);
    while (num != 0 )
    {
        for (int i = 0; i < num; i++)
            sum = sum + pow(10,i);
        num--;
    }
    printf("%d", 9 * sum);
    return (0);
}