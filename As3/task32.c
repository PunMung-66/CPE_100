#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    double count = -1, sum = 0;
    char a[50];
    while (strcmp(a,"exit") != 0)
    {
        printf("Input: ");
        scanf("%s", a);
        sum = sum + atof(a);
        count++;
    }
    printf("%lf\n", sum/count);
    return (0);
}