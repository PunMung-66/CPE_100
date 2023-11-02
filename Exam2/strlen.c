#include <stdio.h>

int str_len(char *str)
{
    int count = 0;
    while (*str)
    {
        count++;
        str++;
    }
    return (count);
}

int main()
{
    char str1[100];
    scanf("%s", str1);
    printf("%d", str_len(str1));
}