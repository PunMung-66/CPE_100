#include <stdio.h>

int main()
{
    float c, f;
    scanf("%f", &c);
    scanf("%f", &f);
    int ans1 = (c * 1.8) + 32;
    int ans2 = (f - 32) / 1.8;
    printf("%d\n", ans1);
    printf("%d", ans2);
    return (0);
}