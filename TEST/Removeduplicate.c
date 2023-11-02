#include <stdio.h>

void insert_sort(int *arr, int len)
{
    for (int i = 1; i < len; i++)
    {
        int focus = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > focus)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = focus;
    }
}

void del_dup(int* num1, int i)
{
    if (num1[i] != '\0')
    {
        int j = 0;
        int num2 = num1[i];
        while (num1[j])
        {
            if (num2 == num1[j] && i != j)
                num1[j] = 10000;
            j++;
        }
        i++;
        del_dup(num1, i);
    }
}

int main()
{
    int amount, i = 0, j =0;
    scanf("%d", &amount);
    int num[amount], num2[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &num[i]);
    del_dup(num, i);
    insert_sort(num, amount);
    for (int i = 0; i < amount; i++)
        if (num[i] != 10000)
        {
            num2[j] = num[i];
            j++;
        }

    for (int i = 0; i < j; i++)
        if (num2[i] != 10000)
            printf("%d\n", num2[i]);
    return (0);
}