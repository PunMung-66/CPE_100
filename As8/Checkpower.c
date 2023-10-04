#include <stdio.h>
#include <math.h>

int check_power(int i, int a)
{
    int t = -1;
        while (i > pow(a,t))
        {
            t++;
            if (i == pow(a, t))
            {
                printf("True\n");
                return (0);
            }
        }
    printf("False\n");
}

int main()
{
    int num;
    scanf("%d", &num);
    check_power(num, 2);
    check_power(num, 3);
    check_power(num, 4);
    return (0);
}