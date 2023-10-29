//ok
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, count1[128] = {0}, count2[128] = {0}, flag = 0;
    scanf("%s", str1);
    scanf("%s", str2);
    for(i = 0; str1[i] != '\0'; i++)
    {
        count1[str1[i]]++;
    }
    for(i = 0; str2[i] != '\0'; i++)
    {
        count2[str2[i]]++;
    }
    for(i = 0; i < 128; i++)
    {
        if(count1[i] != count2[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}