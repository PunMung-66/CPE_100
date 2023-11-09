#include <stdio.h>

int main()
{
    unsigned int account;
    char name[30];
    double balance;

    FILE *cfPtr;// if restart it will create the new one file

    if ((cfPtr = fopen("client.dat", "w")) == NULL)
        puts("File could not open");
    else
    {
        puts("Enter the account, name, and balance");
        puts("Enter EOF (^z) to end input");
        printf("%s", "? ");
        scanf("%d %29s %lf", &account,  name, &balance);

        while (!feof(stdin))
        {
            fprintf(cfPtr, "%d %s %.f\n", account, name, balance);
            printf("%s", "? ");
            scanf("%d %29s %lf", &account, name, &balance);
        }
        fclose(cfPtr);

    }
}