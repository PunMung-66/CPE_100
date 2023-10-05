#include <stdio.h>
#include <math.h>
// void intcopy(int *arr, int *arr1, int n)
// {
//     while (n--)
//         arr[n] = arr1[n];
// }

void intcopy(int *arr, int *arr1, int n)
{
    if (n >= 0)
    {
        n--;
        arr[n] = arr1[n];
        intcopy(arr, arr1, n);
    }
}

void func_L(int *arr, int *arr1, int n)
{
    int j = 0;
    for (int i = 1; i <= n; i+= 2, j++)
        arr1[j] =  arr[i];
}

void lastone(int *arr, int *arr1, int n)
{
    if (n != 1)
    {
        func_L(arr, arr1, n);
        intcopy(arr, arr1, n);
        n = ceil( n / 2 );
        lastone(arr, arr1, n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr1[n];
    for (int i = 0,j = 1; i < n; i++, j++)
        arr[i] = j;
    if (n == 1)
    {
        printf("%d", 1);
        return (0);
    }
    lastone(arr, arr1, n);
    // while (n != 1)
    // {
    //     func_L(arr, arr1, n);
    //     intcopy(arr, arr1, n);
    //     n = ceil( n / 2 );
    // }
    printf("%d ", arr1[0]);
    return (0);
}