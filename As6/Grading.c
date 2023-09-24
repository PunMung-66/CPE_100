#include <stdio.h>

int main()
{
    int amount, num;
    scanf("%d", &amount);
    int sum_element[amount];
    int criteria[4];
    char criteria_sym[]= "ABCDF";

    for (int i = 0; i < amount; i++)
        sum_element[i] = 0;
    for (int i = 0; i < amount; i++)
        for (int a = 0; a < 3; a++)
        {
            scanf("%d", &num);
            sum_element[i] += num;
        }
    for (int i = 0; i < 4; i++)
        scanf("%d", &criteria[i]);
    for (int i = 0; i < amount; i++)
    {
        for (int a = 0; a < 4; a++)
        {
            if (sum_element[i] >= criteria[a])
            {
                printf("%c\n", criteria_sym[a]);
                break;
            }
            if (sum_element[i] < criteria[3])
            {
                printf("%c\n", criteria_sym[4]);
                break;
            }
        }
    }
    return (0);
}