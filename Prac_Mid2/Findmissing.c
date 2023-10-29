//ok
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j, miss, count1[128] = {0}, count2[128] = {0}, flag = 0;
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
            miss = count1[i] - count2[i];
            for (int a = 0; a < miss; a++)
                printf("%c ", i);
        }
    }
    return 0;
}