#include <stdio.h>
#include <math.h>

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

int check_perfect(int i)
{
    int p = 2;
    // pow(2 , p - 1) * (pow(2, p) - 1)
    while (pow(2 , p - 1) * (pow(2, p) - 1) < i)
    {
        p++;
        while(check_prime(p) == 0)
            p++; // chech next prime
    }
    if (pow(2 , p - 1) * (pow(2, p) - 1) == i)
        return (1);
    return (0);
}

int main(void) {
  int n, m, count = 0;
  scanf("%d", &n);
  if (!(0 <= n && n <= 1000000))
      return  (0);
  scanf("%d", &m);
  if (!(n <= m && m <= 1000000))
      return  (0);
  for (int i = n; i <= m; i++)
     if (check_perfect(i) == 1)
     {
        printf("%d \n", i);
        count = 1;
     }
     
  if (count == 0)
     printf("None");
  return (0);
}