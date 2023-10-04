#include <stdio.h>

int lcm(int a, int b)
{
    int t = a % b;
    if (t == 0)
        return(a);
    return (a * lcm(b,t) / t);
}

int main()
{
    int a, b, gcd;
    scanf("%d", &a);
    scanf("%d", &b);
    gcd = a * b / lcm(a, b);
    printf("%d", gcd);
}