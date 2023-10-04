#include <stdio.h>

int TowerOfHanoi(int n, char source, char destination, char auxiliary)
{
    if (n == 1)
    {
        printf("Move disk 1 from source %c to destination %c\n", source, destination );
        return (0);
    }
    TowerOfHanoi(n-1, source, auxiliary, destination);
    printf("Move disk %d from source %c to destination %c\n", n, source, destination );
    return TowerOfHanoi(n-1, auxiliary, destination, source);
}

int main()
{
    TowerOfHanoi(4 , 'A', 'B', 'C');
}