#include <stdio.h>

int factor(int i, int num)
{
    if ( num < 2 || i < 2)
        return (0);
    if (num % i == 0)
    {
        printf("%d ", i);
        return (factor(i ,num / i) );
    }
    if (num % i++ != 0)
        return (factor(i ,num) );
}

int main()
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    factor(2, num);
    return (0);
}