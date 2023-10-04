#include <stdio.h>

int power(int a, int i)
{
    if (i == 0)
        return (1);
    return ( a * power( a, i - 1));
}

int main()
{
    int base, pow_num;
    scanf("%d", &base);
    scanf("%d", &pow_num);
    printf("%d", power(base, pow_num));
}