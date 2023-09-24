#include <stdio.h>

int main()
{
    int amount, i, index = 0;
    scanf("%d", &amount);
    int num[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &num[i]);
    for (int i = 0; i < amount; i++)
        if(num[index] <= num[i])
            index = i;
    printf("%d\n", num[index]);
    printf("%d\n", index);
    return (0);
}