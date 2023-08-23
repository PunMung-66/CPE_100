#include <stdio.h>
#include <stdlib.h>
int main()
{
    int day_fi, month, day = 1, week = 0;
        char *months_n[12][2] = {
        {"January", "31"},
        {"February", "28"},
        {"March", "31"},
        {"April", "30"},
        {"May", "31"},
        {"June", "30"},
        {"July", "31"},
        {"August", "31"},
        {"September", "30"},
        {"October", "31"},
        {"November", "30"},
        {"December", "31"}};
        printf("Input: month number:");
        scanf("%d", &month );
        printf("The first day of month: ");
        scanf("%d", &day_fi );
        printf("= %s = \n", months_n[month-1][0]);
        printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
        printf("---------------------------------------------------\n");
        for (int i = 1; i < day_fi; i++)
        {
            printf(" \t");
            week++;
        }
        
        while ( day <= atoi(months_n[month - 1][1]))
        {
            week++;
            printf("%d\t", day);
            if (week == 7)
            {
                printf("\n");
                week = 0;
            }
            day++;
        }
        printf("\n");
        printf("---------------------------------------------------\n");
    return (0);
}