//ok
#include <stdio.h>
#include <stdlib.h>

struct time_s
{
    int h;
    int m;
    int s;
    int sum;
};

int main()
{
    struct time_s time1, time2;
    
    int sum1, sum2;
    scanf("%d:%d:%d", &time1.h, &time1.m, &time1.s);
    scanf("%d:%d:%d", &time2.h, &time2.m, &time2.s);
    if (time1.h > time2.h)
    {
        time1.h = -24 + time1.h;
    }
    time1.sum = (time1.h * 3600) + (time1.m * 60) + time1.s;
    time2.sum = (time2.h * 3600) + (time2.m * 60) + time2.s;
    int sleep_time = abs(time1.sum - time2.sum);
    if (sleep_time >= (7 * 3600) && sleep_time <= (10 * 3600))
    {
        printf("True");
        return (0);
    }
    printf("False");
    return (0);
}