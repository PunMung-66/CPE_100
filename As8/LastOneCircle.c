#include <stdio.h>

// int circle_out(int *arr, int count, int i, int num)
// {
//     while (count)
//     {
//         if (i >= num)
//         {
//             i -= num;
//         }
//         if(arr[i] != 0)
//             count--;
//         i++;
//     }
//     arr[i - 1] = 0;
//     return (i);
// }

int circle_out2(int *arr, int count, int i, int num)
{
    if (count == 0)
    {
        arr[i - 1] = 0;
        return (i);
    }
    if (i >= num)
    {
        i -= num;
    }
    if(arr[i] != 0)
        count--;
    i++;
    return (circle_out2(arr, count, i, num));
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
        a = circle_out2(arr,count, a, m);
        n--;
    }
    for (int i = 0; i < m; i++)
        if(arr[i] != 0)
            printf("%d ", arr[i]);
    return (0);
}