//Ok
#include <stdio.h>

int main()
{
    int amount, i = 0;
    scanf("%d", &amount);
    if (1 <= amount && amount <= 100 )
    {
        double element[amount][3];
        double grade[] = {0, 0, 0, 0};
        double sum[amount];
        while(i < amount)
        {
            scanf("%lf %lf %lf", &element[i][0], &element[i][1], &element[i][2]);
            if (!(-20 <= element[i][0] && element[i][0] <= 40))
                return (0);
            if (!(-20 <= element[i][1] && element[i][1] <= 40))
                return (0);
            if (!(-20 <= element[i][2] && element[i][2] <= 20))
                return (0);
            i++;
        }

        for (int  i = 0; i < amount; i++)
        {
            sum[i] = element[i][0] + element[i][1] + element[i][2];
            if (80 <= sum[i] && sum[i] <= 100)
                grade[0] += 1;
            if (70 <= sum[i] && sum[i] <= 100)
                grade[1] += 1;
            if (60 <= sum[i] && sum[i] <= 100)
                grade[2] += 1;
            if (50 <= sum[i] && sum[i] <= 100)
                grade[3] += 1;
        }

        for (int i = 0; i < 4; i++)
        {
            double percent = (grade[i] * 100) / amount;
            printf("%.0lf %.2lf \n", grade[i], percent);
        }
        printf("%d %.2lf\n", amount, 100.00);
        // for (int  i = 0; i < amount; i++)
        //     printf("%lf %lf %lf \n", element[i][0], element[i][1], element[i][2]);
    }
    return (0);
}