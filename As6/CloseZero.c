#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount, sec_index = 0, index = 0;
    scanf("%d", &amount);
    int num[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &num[i]);
    for (int i = 0; i < amount ; i++)
        for (int a = 0; a < amount; a++)
            if (abs(num[sec_index] + num[index]) > abs(num[i] + num[a]) && i != a)
            {
                sec_index = i;
                index = a;
            }
    
    printf("%d\n", num[sec_index]);
    printf("%d\n", num[index]);
    return (0);
}