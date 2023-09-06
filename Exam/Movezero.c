//Ok
#include <stdio.h>

int main()
{
    int amount, num, i = 0, count_zero = 0, amount_new = 0;
    scanf("%d", &amount);
    if (1 <= amount && amount <= 100 )
    {
        int element[amount];
        while(i < amount)
        {
            scanf("%d", &num);
            if (!(-1000 <= num && num <= 1000))
                return (0);
            if (num == 0)
                count_zero++;
            if (num != 0)
            {
                element[amount_new] = num;
                amount_new++;
            }
            i++;
        }
        for (int i = 0; i < amount_new; i++)
            printf("%d\n", element[i]);
        for (int i = 0; i < count_zero; i++)
            printf("%d\n", 0);
    }
    return (0);
}