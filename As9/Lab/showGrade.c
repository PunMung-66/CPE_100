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
    int index = 0, col = 0;
    double av_grade = 0, all_credit = 0, ms_grade = 0, ms_credit = 0, e_grade = 0, e_credit = 0;
    double C_all = 0, G_all = 0;
    //print head
    fgets(line, sizeof(line), file);
    token = strtok(line, ",");
    while (token != NULL)
        {
            if (col != 0)
                printf("%s\t", token);
            token = strtok(NULL, ",");
            col++;
        }
    printf("\n");
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
    printf("\n=============================\n");
    //Debugger
    // for (int i = 0; i < index; i++)
    // {
    //     printf("%s ", sub[i].term);
    //     printf("%s ", sub[i].code);
    //     printf("%s ", sub[i].name);
    //     printf("%.2lf ", sub[i].credit);
    //     printf("%.2lf\n", sub[i].grade);
    // }
    strcpy(term, sub[0].term);
    for (int i = 0; i < index; i++)
    {
        if (strcmp(term,sub[i].term) != 0)
        {
            ms_grade = ms_grade/ ms_credit;
            e_grade = e_grade/ e_credit;
            
            av_grade = av_grade/ all_credit;
            printf("%s I got grade: %.2lf\n", term, av_grade);
            printf("%s your Sience and Math are %.2lf\n", term, ms_grade);
            printf("%s your English are %.2lf\n\n", term, e_grade);
            strcpy(term, sub[i].term);
            ms_grade = 0, ms_credit = 0, e_grade = 0, e_credit = 0, all_credit = 0, av_grade = 0;
        }

        all_credit += sub[i].credit;
        av_grade += (sub[i].credit * sub[i].grade);

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
    ms_grade = ms_grade/ ms_credit;
    e_grade = e_grade/ e_credit;
    av_grade = av_grade/ all_credit;
    printf("%s I got grade: %.2lf\n", term, av_grade);
    printf("%s your Sience and Math are %.2lf\n", term, ms_grade);
    printf("%s your English are %.2lf\n\n", term, e_grade);
    

    fclose(file);
    return 0;
}