//ok
#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    while (str1[i])
    {
        if (str1[i] == str2[j])
            j++;
        if (str2[j] == '\0')
        {
            printf("True");
            return(0);
        }
        i++;
    }
    printf("False");
    return (0);
}