#include <stdio.h>

void convert()
{
     int num, bin = 0, rem = 0, place = 1;
    scanf("%d", &num);
    if (0 <= num && num <= 1000)
    {
      for (int i = num; num > 0 ;)
      {
          rem = num % 2;
          num = num / 2;
          bin = bin + (rem * place);
          place = place * 10;
      }
      printf("%d\n", bin);
    }
}

int main()
{
    convert();
    return 0;
}