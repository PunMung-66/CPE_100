//Ok
#include <stdio.h>
#include <stdbool.h>

int check_dup(int arr[], int val, int len)
{
    int i = 0;
    while (i < len)
    {
        if (val == arr[i])
            return (1);
        i++;
    }
    return (0);
}

int main()
{
    bool inside = false;
    int amount_1, amount_2, i = 0;
    scanf("%d", &amount_1);
    int element_1[amount_1];
    if (1 <= amount_1 && amount_1 <= 100 )
    {
        while(i < amount_1)
        {
            scanf("%d", &element_1[i]);
            if (!(-1000 <= element_1[i] && element_1[i] <= 1000) || check_dup(element_1, element_1[i], i))
                return (0);
            i++;
        }
    }
    else
    {
        return (0);
    }
    scanf("%d", &amount_2);
    int element_2[amount_2];
    if (1 <= amount_2 && amount_2 <= amount_1)
    {
        int i = 0;
        while(i < amount_2)
        {
            scanf("%d", &element_2[i]);
            if (!(-1000 <= element_2[i] && element_2[i] <= 1000) || check_dup(element_2, element_2[i], i))
                return (0);
            i++;
        }
        for (int i = 0; i < amount_2; i++)
        {
            inside = false;
            for (int a = 0; a < amount_1; a++)
                if (element_2[i] == element_1[a])
                    inside = true;
            if (inside != true)
            {
                printf("False");
                return(0);
            }
        }
    }
    else
    {
        return (0);
    }
    printf("True");
    return (0);
}