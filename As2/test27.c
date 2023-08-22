#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if ('a' <= a && a <= 'z')
        printf("Lower");
    if ('A' <=  a && a <= 'Z')
        printf("Upper");
    if ('0' <=  a && a <= '9')
        printf("Number");
    return (0);
}