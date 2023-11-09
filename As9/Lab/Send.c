#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct subject
{
    char term[20];
    char code[20];
    char name[20];
    double credit;
    double grade;
};


int main() {
    // Open the CSV file for reading
    struct subject sub[300];
    FILE *file = fopen("EngGrade.csv", "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char first[1], line[1024], *token, term[30];
    int index = 0, col = 0, count = 0;
    double each_grade = 0, each_credit = 0, ms_grade = 0, ms_credit = 0, e_grade = 0, e_credit = 0;
    double C_all = 0, G_all = 0;
    //print head
    fgets(line, sizeof(line), file);
    token = strtok(line, ",");
    while (token != NULL)
        {
            if (col != 0)
            //printf("%s\t", token);
            token = strtok(NULL, ",");
            col++;
        }

    //print data
    while (fgets(line, sizeof(line), file)) 
    {
        col = 0;
        token = strtok(line, ",");
        if (strstr(line,",,,,") != NULL)
            continue;
        while (token != NULL)
        {
            if (strstr(token,"Grade") != NULL)
                strcpy(term, token);
            else
            {
                //printf("(%d)%s\t ", col,token);
                if (col == 0)
                {
                    strcpy(sub[index].term,term);
                    strcpy(sub[index].code,token);
                }
                if (col == 1)
                    strcpy(sub[index].name,token);
                if (col == 2)
                    sub[index].credit = atof(token);
                if (col == 3)
                    sub[index].grade = atof(token);
                col++;
            }
            token = strtok(NULL, ",");
        }
        index++;
        //printf("\n");
    }
    //printf("\n=============================\n");
    //Debugger
    // for (int i = 0; i < index; i++)
    // {
    //     printf("%s ", sub[i].term);
    //     printf("%s ", sub[i].code);
    //     printf("%s ", sub[i].name);
    //     printf("%.2lf ", sub[i].credit);
    //     printf("%.2lf\n", sub[i].grade);
    // }

    FILE *cfPtr;// if restart it will create the new one file

    if ((cfPtr = fopen("file.csv", "w")) == NULL)
        puts("File could not open");
    else
    {
        fprintf(cfPtr, "Term, Grade, MSGrade, EGrade\n");

        strcpy(term, sub[0].term);
        for (int i = 0; i <= index; i++)
        {
            if (strcmp(term,sub[i].term) != 0)
            {
                G_all += each_grade;
                C_all += each_credit;
                ms_grade = ms_grade/ ms_credit;
                e_grade = e_grade/ e_credit;
                each_grade = each_grade/ each_credit;
                fprintf(cfPtr, "%s,%.2lf,%.2lf,%.2lf\n", term, each_grade, ms_grade, e_grade);
                // printf("%s I got grade: %.2lf\n", term, each_grade);
                // printf("%s your Sience and Math are %.2lf\n", term, ms_grade);
                // printf("%s your English are %.2lf\n\n", term, e_grade);
                strcpy(term, sub[i].term);
                ms_grade = 0, ms_credit = 0, e_grade = 0, e_credit = 0, each_credit = 0, each_grade = 0;
                count++;
            }

            each_credit += sub[i].credit;
            each_grade += (sub[i].credit * sub[i].grade);
            
            if (strstr(sub[i].code,"E") != NULL)
            {
                e_credit += sub[i].credit;
                e_grade += (sub[i].credit * sub[i].grade);
            }

            if (strstr(sub[i].code,"M") != NULL || strstr(sub[i].code,"SI") != NULL)
            {
                ms_credit += sub[i].credit;
                ms_grade += (sub[i].credit * sub[i].grade);
            }
        }
        G_all = G_all/ C_all;
        fprintf(cfPtr, "Average grade, %d ,term is:, %.3lf", count, G_all);
        // ms_grade = ms_grade/ ms_credit;
        // e_grade = e_grade/ e_credit;
        // each_grade = each_grade/ each_credit;
        // fprintf(cfPtr, "%s,%.2lf,%.2lf,%.2lf", term, each_grade, ms_grade, e_grade);

        // printf("%s I got grade: %.2lf\n", term, each_grade);
        // printf("%s your Sience and Math are %.2lf\n", term, ms_grade);
        // printf("%s your English are %.2lf\n\n", term, e_grade);
    }

    fclose(file);
    fclose(cfPtr);
    return 0;
}