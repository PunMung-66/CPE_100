#include <stdio.h>

int check_prime(int i)
{
  int j = 0;
  for (j = 2; j <= i ; j++)
      if (i % j == 0)
          break;
  if (j == i)
    return (1);
  return (0);
}

int main()
{
    int num, i = 2, sum = 0;
    scanf("%d", &num);
    while ( i <= num)
    {
        if (num % i == 0)
        {
            sum += i; 
            num /= i;
        }
        if (num % i != 0)
            i++;
    }
    if (check_prime(sum) == 1)
        printf("True");
    else
    {
        printf("False");
    }
    return(0);
}