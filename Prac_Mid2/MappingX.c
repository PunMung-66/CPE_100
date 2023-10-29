//ok
#include <stdio.h>

int main()
{
    int i , count;
    char str1[100], *str2, count_str1[100];
    scanf("%s", str1);
    scanf("%s", str2);
    while (*str2)
    {
        i = 0;
        count = 0;
        while (str1[i])
        {
            if (*str2 == str1[i] && count == 0 && count_str1[i] != 1)
            {
                count_str1[i] = 1;
                count = 1;
            }
            i++;
        }
        str2++;
    }
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if ( count_str1[i] == 1)
            printf("%c", str1[i]);
        else
        {
            printf("X");
        }
    }
    return (0);
}