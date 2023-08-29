#include <stdio.h>


int base(int num, int base)
{
  int i = 0;
  char ans[32];
  while (num)
  {
    ans[i] =  (num % base) + '0';
    num /= base;
    i++;
  }
  ans[i] = '\0';
  while (--i >= 0)
    printf("%c", ans[i]);
  printf("\n");
  return (0);
}

int main(void) {
    int num;
  scanf("%d", &num);
  base(num, 2);
  return 0;
}