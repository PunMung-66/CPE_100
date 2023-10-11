#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

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
    int amount, index = 1;
    scanf("%d", &amount);
    int arr[amount];
    for (int i = 0; i < amount; i++)
        scanf("%d", &arr[i]);
    insert_sort(arr, amount);
    for (int i = 0; i < amount; i++)
        printf("%d\n", arr[i]);
    return (0);
}
//Punnwat Mungalarungsi 66070503436