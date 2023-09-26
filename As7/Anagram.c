#include <stdio.h>

void check_anagram( int arr[], int arr2[], int amount)
{
    for (int i = 0; i < amount; i++)
        for (int j = 0; j < amount; j++)
            if (arr[i] == arr2[j])
                arr[i] = -9999;
    
}

int main(void) {
    int amount1, amount2;
    int *arr_check;
    scanf("%d", &amount1);
    int arr[amount1];
    for (int i = 0; i < amount1; i++)
        scanf("%d", &arr[i]);
        
    scanf("%d", &amount2);
    int arr2[amount2];
    for (int i = 0; i < amount2; i++)
        scanf("%d", &arr2[i]);

    if (amount1 == amount2)
        check_anagram(arr, arr2, amount1);
    for (int i = 0; i < amount1; i++)
        if(arr[i] != -9999)
        {
            printf("False");
            return (0);
        }
    printf("True");
    return (0);
}