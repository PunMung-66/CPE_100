#include <stdio.h>

int main()
{
    int c, a, sum;
    scanf("%d %d", &a, &c);
    sum = a / c;
    if ((a % c) != 0)
        sum = a / c + 1;
    printf("%d", sum);
    return (0);
}