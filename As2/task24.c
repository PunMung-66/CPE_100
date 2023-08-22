#include <stdio.h>

int main()
{
    int c, a, q, r;
    scanf("%d %d", &a, &c);
    q = a / c;
    r = a % c;
    printf("%d %d", q, r);
    return (0);
}