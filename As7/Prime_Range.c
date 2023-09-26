#include <stdio.h>

int check(int i)
{
  int j = 0;
  for (j = 2; j <= i ; j++)
      if (i % j == 0)
          break;
  if (j == i)
    return (1);
  return (0);
}

int main(void) {
  int n, m, count = 0;
  scanf("%d", &n);
  if (!(-1000000 <= n && n <= 1000000))
      return  (0);
  scanf("%d", &m);
  if (!(n <= m && m <= 1000000))
      return  (0);
  for (int i = n; i <= m; i++)
     if (check(i) == 1)
     {
        printf("%d \n", i);
        count = 1;
     }
  if (count == 0)
     printf("None");
  return (0);
}