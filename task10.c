#include <stdio.h>

int main()
{
  double num;
  printf("input:");
  scanf("%lf", &num);
  printf("output: %.3lf\n", (num * num) * 22/7);
  return (0);
}