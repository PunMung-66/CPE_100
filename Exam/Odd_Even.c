//ok
#include <stdio.h>

int main()
{
    int amount, num, i = 0, count_zero = 0, amount_odd = 0, amount_even = 0;
    scanf("%d", &amount);
    if (1 <= amount && amount <= 100 )
    {
        int element_odd[amount];
        int element_even[amount];
        while(i < amount)
        {
            scanf("%d", &num);
            if (!(-1000 <= num && num <= 1000))
                return (0);
            if (num % 2 == 0)
            {
                element_even[amount_even] = num;
                amount_even++;
            }
            if (num % 2 != 0)
            {
                element_odd[amount_odd] = num;
                amount_odd++;
            }
            i++;
        }
        if (amount_odd == 0)
            printf("None");
        for (int i = 0; i < amount_odd; i++)
            printf("%d ", element_odd[i]);
        printf("\n");
        if (amount_even == 0)
            printf("None");
        for (int i = 0; i < amount_even; i++)
            printf("%d ", element_even[i]);
    }
    return (0);
}