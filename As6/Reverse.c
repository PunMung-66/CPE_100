#include <stdio.h>

int main()
{
    int amount, index = 0, i;
    scanf("%d", &amount);
    int num[amount];
    for (i = 0; i < amount; i++)
        scanf("%d", &num[i]);
    //printf("time: %d\n", i);
    i--;
    for (int a = i; a >= 0; a--)
        printf("%d\n", num[a]);
    return (0);
}