#include <stdio.h>

int factorial(int i)
{
    if (i == 0)
        return (1);
    if (i == 1)
        return (1);
    return(i * factorial(i - 1));
}

int Cnr(int num, int r)
{
    int result = factorial(num)/ (factorial(r) * factorial(num - r));
    return (result);
}

int main()
{
    int a;
    scanf("%d", &a);
    int result[a];
    a--;
    for (int i = 0; i <= a; i++)
        result[i] = Cnr(a,i);
    for (int i = 0; i <= a; i++)
        printf("%d ", result[i]);
    
}