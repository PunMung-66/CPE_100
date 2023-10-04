#include <stdio.h>

int summation(int i, int end)
{
    if (i == end + 1)
        return (0);
    return(i + summation(i + 1, end));
}

int main()
{
    int num, end;
    printf("Input: ");
    scanf("%d", &num);
    scanf("%d", &end);
    printf("%d ", summation(num, end));
    return (0);
}