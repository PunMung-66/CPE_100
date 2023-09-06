#include <stdio.h>

int main()
{
    int num;
    char start = 'A';
    printf("Input: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int a = 1; a <= i; a++)
            printf("%c ", start);
        start++;
        printf("\n");
    }
    
    return (0);
}