#include <stdio.h>

int main()
{
    int d, m, y, status = 1;
    scanf("%d/%d/%d", &d, &m, &y);
    int day_inmonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (y % 4 == 0)
        day_inmonth[2] = 29;
    if (m > 12 || m < 1)
        status = 0;
    if (d > day_inmonth[m] || d < 1)
        status = 0;
    if (status == 1)
    {
        printf("Valid date");
        return (0);
    }
    printf("Invalid date");
    return (0);    
}