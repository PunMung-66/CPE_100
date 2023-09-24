#include <stdio.h>

int main()
{
    int amount, i, index = 0;
    scanf("%d", &amount);
    int num[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &num[i]);
    for (int i = 1; i < amount - 1; i++)
        if (num[i - 1] < num[i] && num[i] > num[i + 1])
        {
            index = i;
            break;
        }
    printf("%d", index);
    return (0);
}