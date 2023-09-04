#include <stdio.h>

int factorial(int i)
{
    if (i == 0)
        return (1);
    if (i == 1)
        return (1);
    return(i * factorial(i - 1));
}

int main()
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    printf("%d ", factorial(num));
    return (0);
}