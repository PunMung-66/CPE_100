#include <stdio.h>
#include <string.h>

int len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void reverse(char *dest,char *src, int i)
{
    if (i == 0)
        *dest  = '\0';
    i--;
    if (i >= 0)
    {
        *dest = src[i];
        dest++;
        reverse(dest, src, i);
    }
}

int main()
{
    char str[90], str2[90];
    scanf("%s", str);
    reverse(str2, str, len(str));
    printf("%s" , str2);
    return(0);
}