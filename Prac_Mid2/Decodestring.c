#include <stdio.h>

void decode(char * str)
{
    int i = 0, sum = 0;
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            if ((!str[i + 1] >= '0' && str[i + 1] <= '9'))
                sum += (str[i] - '0');
            else
            {
                sum = (sum * 10) + (str[i] - '0');
            }
        }

        else
        {
            if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
                printf("%c", str[i]);
            else
            {
                for (int a = 0; a < sum; a++)
                    printf("%c", str[i]);
            }
            sum = 0;
        }
        i++;
    }

}

int main()
{
    char str[100];
    scanf("%s", str);
    decode(str);
    return (0);
}