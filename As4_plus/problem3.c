
#include <stdio.h>

int count = 0;
int prime_check(int i, int num)
{
    if ((num % i == 0 && i != num) || num < 2 || i < 2)
        return (0);
    if (num % i == 0 && i == num)
    {
        printf("%d ", num);
        count++;
        if(count % 10 == 0)
            printf("\n");
        return (0);
    }
    return (prime_check(i + 1 ,num));
}

int main()
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
        prime_check(2,i);
    return (0);
}