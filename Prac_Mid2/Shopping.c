//ok
#include <stdio.h>

struct object
{
    char name[99];
    int quan;
    int price;
    int sum;
};

int max(int num[], int amount)
{
    int index = 0;
    for (int i = 0; i < amount; i++)
    {
        if(num[index] < num[i] && num[i] >= 2)
            index = i;
    }
    return index;
}

int main()
{
    int amount, same = 0;
    scanf("%d", &amount);
    int sum_all[100000];
    for (int i = 0; i < 100000; i++)
        sum_all[i] = 0;
    
    struct object product[amount];
    for (int i = 0; i < amount; i++)
        scanf("%s %d %d", &product[i].name, &product[i].quan, &product[i].price);
    
    // for (int i = 0; i < amount; i++)
    // {
    //     printf("%s %d %d\n", product[i].name, product[i].quan, product[i].price);
    // }
    
    for (int i = 0; i < amount; i++)
    {
        product[i].sum = product[i].quan * product[i].price;
        sum_all[product[i].sum]++;
    }

    for (int i = 0; i < 100000; i++)
    {
        if (sum_all[i] >= 2)
        {
            for (int a = 0; a < amount; a++)
            {
                if (product[a].sum == i)
                    printf("%s ", product[a].name);
            }
            same = 1;
            printf("\n");
        }
    }

    if (same == 0)
        printf("None");
}