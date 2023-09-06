//Ok
#include <stdio.h>
#include <math.h>

int main()
{
    int amount, i = 0, p = 0;
    double mean = 0, sd = 0, max = 0;
    scanf("%d", &amount);
    if (1 <= amount && amount <= 100 )
    {
        double element[amount];
        int mode_all[2];
        while(i < amount)
        {
            scanf("%lf", &element[i]);
            if (!(-1000 <= element[i] && element[i] <= 1000))
                return (0);
            i++;
        }
        for (int i = 0; i < amount; i++)
        {
            // mode count
            int count = 0;
            for (int a = i; a < amount; a++)
                if(element[i] == element[a] && i != a)
                    count++;
            if (max < count && count >= 1)
            {
                mode_all[0] = element[i];
                mode_all[1] = '\0';
                max = count;
            }
            else if (max == count && count >= 1)
            {
                mode_all[1] = element[i];
                p++;
            }
            // mean for mean
            mean += element[i];
        }
        mean /= amount;
        // sd calculate
        for (int i = 0; i < amount; i++)
            sd += pow(element[i] - mean, 2);
        sd = sqrt(sd / amount);

        printf("%.2lf\n",mean);
        if ( p >= 2 || max == 0)
            printf("NONE");
        else
        {
            for (int i = 0; i <= p; i++)
                printf("%d ",mode_all[i]);
        }
        printf("\n");
        printf("%.2lf", sd);
    }
    return (0);
}