#include <stdio.h>

int main()
{
    int a, b, c, sum, biggest;
    scanf("%d %d %d",&a ,&b ,&c);
    biggest = a;
    if( b > a)
        biggest = b;
    if(c > biggest)
        biggest = c;
    sum = a + b + c - biggest;
    if ( sum > biggest)
        printf("Yes");
    if ( sum <= biggest)
        printf("No");
    return (0);
}