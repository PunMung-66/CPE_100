#include <stdio.h>

int summation(int i)
{
    if (i <= 0)
        return (0);
    if (i == 1)
        return (1);
    return(i + summation(i - 1));
}

int main()
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    printf("%d ", summation(num));
    return (0);
}