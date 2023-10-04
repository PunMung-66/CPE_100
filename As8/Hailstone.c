#include <stdio.h>

int hailstone(int num)
{
    if (num == 1)
        return (0);
    else if ( num % 2 == 0)
    {
        num /= 2;
        printf("%d\n", num);
    }
    else if ( num % 2 == 1)
    {
        num = (num * 3) + 1;
        printf("%d\n", num);
    }
    return (hailstone(num));
}

int main()
{
    int m;
    scanf("%d", &m);
    printf("%d\n", m);
    hailstone(m);
    return (0);
}