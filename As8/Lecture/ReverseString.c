#include <stdio.h>

int len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
void reverse(char *dest,char *src)
{
    int i = len(src) - 1, j =0;
    while (i >= 0)
    {
        dest[j] = src[i];
        j++;
        i--;
    }
    dest[j]  = '\0';
    printf("%s", dest);
}

int main()
{
    char *str, *str2;
    scanf("%s", str);
    reverse(str2, str);
}