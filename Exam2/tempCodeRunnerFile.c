#include <stdio.h>

int fact(int n)
{
    if (n <= 0)
        return (1);
    return (n * fact(n - 1));
}

int Cnr(int n, int r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}

int main()
{
    int n, ans;
    scanf("%d", &n);
    for (int j = 0; j <= n; j++)
    {
        ans = Cnr(n - 1, j - 1) + Cnr(n - 1, j);
        if (j + 1 != n)
            printf("%d", ans);
    }
    return (0);
}