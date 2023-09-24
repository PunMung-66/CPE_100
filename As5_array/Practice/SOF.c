#include <stdio.h>
#include <stdbool.h>

int main()
{
    int amount, i;
    scanf("%d", &amount);
    int prime_num[amount + 1];
    for (int i = 2; i <= amount; i++)
        if (!((i % 2 == 0 && i != 2) || (i % 3 == 0 && i != 5) || (i % 5 == 0 && i != 5)))
            prime_num[i] = 1;
    for (int i = 2; i <= amount; i++)
        if (prime_num[i] == 1)
            printf("%d ", i);
    return (0);
}