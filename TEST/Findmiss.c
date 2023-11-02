#include <stdio.h>

int str_len(char *str)
{
    int count = 0;
    while (*str)
    {
        count++;
        str++;
    }
    return (count);
}

void miss(char* str1, char* str2)
{
    int i = 0, j =0;
    while (str1[i] != '\0' || str2[j] != '\0')
    {
        if (str1[i] != str2[j])
        {
            printf("%c ", str1[i]);
            i++;
        }
        else
        {
            j++;
            i++;
        }
    }
}
void insert_sort(char *arr, int len)
{
    for (int i = 1; i < len; i++)
    {
        int focus = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > focus)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = focus;
    }
}

int main()
{
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    insert_sort(str1, str_len(str1));
    insert_sort(str2, str_len(str2));
    miss(str1, str2);
    return(0);
}