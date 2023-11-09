#include <stdio.h>

int main()
{
    unsigned int account;
    char name[30];
    double balance;

    FILE *cfPtr;// if restart it will create the new one file

    if ((cfPtr = fopen("client.dat", "r")) == NULL)
        puts("File could not open");
    else
    {
        printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
        fscanf(cfPtr, "%d%29s%lf", &account,  name, &balance);

        while (!feof(cfPtr))
        {
            printf("%-10d%-13s%7.2f\n", account, name, balance);
            fscanf(cfPtr, "%d%29s%lf", &account,  name, &balance);
        }
        fclose(cfPtr);

    }
}