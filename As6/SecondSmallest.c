#include <stdio.h>

int main()
{
    int amount, sec_index = 0, index = 0;
    scanf("%d", &amount);
    int num[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &num[i]);
    for (int i = 0; i < amount; i++)
        if(num[index] > num[i])
            index = i;
    for (int i = 0; i < amount; i++)
    {
        if (sec_index == index)
            sec_index++;
        if(num[sec_index] > num[i] && i != index)
            sec_index = i;
    }
    
    printf("%d\n", num[sec_index]);
    printf("%d", sec_index);
    return (0);
}