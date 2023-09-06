//ok
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int prime_check(int num)
{
     if (num <= 1) return 0;
     if (num % 2 == 0 && num > 2) return 0;
     for(int i = 3; i < num / 2; i+= 2)
     {
         if (num % i == 0)
             return 0;
     }
     return 1;
}

int palin_check(int j)
{
    char str1[32];
    char str2[32];
    sprintf(str1, "%d", j);
    int i = 0, l = strlen(str1);
    
    while (l-- >= 0)
    {
        str2[i] = str1[l];
        i++;
    }
    return (strcmp(str1,str2));
}

int main()
{
    int num;
    scanf("%d", &num);
    num++;
    if (0 <= num <= 1000)
    {
        while(!(prime_check(num) == 1 && palin_check(num) == 0))
            num++;
        printf("%d", num);
    }
    return (0);
}