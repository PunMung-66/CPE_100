#include <stdio.h>

int sumdigit(int i, int sum)
{
    if (i <= 0)
        return (0);
    sum = i % 10;
    return(sum + sumdigit(i/10 , sum));
}

int main()
{
    int num, sum = 0;
    printf("Input: ");
    scanf("%d", &num);
    sum = sumdigit(num, sum);
    printf("%d ", sum);
    return (0);
}