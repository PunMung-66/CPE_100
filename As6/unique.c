#include <stdio.h>

int main()
{
    int amount, index = 0, count = 0;
    scanf("%d", &amount);
    int num[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &num[i]);
    for (int  i = 0; i < amount; i++)
    {
        for (int a = 0; a < amount; a++)
            if (num[i] == num[a] && i != a)
                count++;
        if (count == 0)
            printf("%d\n", num[i]);
        count = 0;
    }
    return (0);
}