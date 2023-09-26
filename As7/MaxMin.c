#include <stdio.h>

int max(int num[], int amount)
{
    int index = 0;
    for (int i = 0; i < amount; i++)
        if(num[index] <= num[i])
            index = i;

    return index;
}

int min(int num[], int amount)
{
    int index = 0;
    for (int i = 0; i < amount; i++)
        if(num[index] >= num[i])
            index = i;

    return index;
}

int main()
{
    int amount, i, index = 0;
    scanf("%d", &amount);
    int num[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &num[i]);
    printf("%d\n", num[max(num, amount)]);
    printf("%d\n", num[min(num, amount)]);
    return (0);
}