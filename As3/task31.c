#include <stdio.h>

int main()
{
    int num1, num2, i = 2, sum = 1;
    printf("Input: ");
    scanf("%d %d", &num1, &num2);
    while (num1 != 0 && num2 != 0)
    {
        while ((num1 % i != 0 || num2 % i != 0) && (num1 >= i || num2 >= i))
            i++;
        if (num1 % i == 0 || num2 % i == 0)
            sum *= i;
        num1 /= i;
        num2 /= i;
        i = 2;
    }
    printf("%d", sum);
    return (0);
}