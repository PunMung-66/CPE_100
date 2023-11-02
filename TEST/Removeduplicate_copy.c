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

int main()
{
    int amount, i = 0, j =0;
    scanf("%d", &amount);
    int num[amount], num2[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &num[i]);
    insert_sort(num, amount);
    for (int i = 0; i < amount; i++)
        if (num[i] != num[i + 1])
        {
            printf("%d\n", num[i]);
        }
    return (0);
}