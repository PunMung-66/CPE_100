#include <stdio.h>

int  lcm(int a, int b, int t)
{
    if (t % a == 0 && t % b == 0)
        return (t);
    t++;
    return (lcm(a,b,t));
}

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    if ( n == 0 || m == 0)
    {
        printf("ERROR");
        return (0);
    }
    printf("%d", lcm(n,m,1));
    return (0);
}