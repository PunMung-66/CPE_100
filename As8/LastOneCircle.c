#include <stdio.h>

void intcopy(int *arr, int *arr1, int n)
{
    while (n--)
        arr[n] = arr1[n];
}

int circle_out(int *arr, int count, int i, int num)
{
    while (count)
    {
        if (i >= num)
        {
            i -= num;
        }
        if(arr[i] != 0)
            count--;
        i++;
    }
    arr[i - 1] = 0;
    return (i);
}
int main()
{
    int n, m, count, a = 0;
    scanf("%d", &n);
    scanf("%d", &count);
    m = n;
    int arr[n];
    if (n == 0)
        return (0);
    if (n == 1)
    {
        printf("%d", 1);
        return (0);
    }
    for (int i = 0,j = 1; i < n; i++, j++)
        arr[i] = j;
    while (n > 1)
    {
        a = circle_out(arr,count, a, m);
        n--;
    }
    for (int i = 0; i < m; i++)
        if(arr[i] != 0)
            printf("%d ", arr[i]);
    return (0);
}