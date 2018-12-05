#include<stdio.h>

struct ID
{
    char Number1[7];
    char Number2[8];
};

struct Person
{
    char Name[30];
    char Address[100];
    struct ID Id;
};

int main(int argc, const char* argv[])
{
    int state;
    char ch;
    struct Person P1={};

    FILE* file=fopen("mystory.txt", "wt");
    if(file==NULL)
    {
        printf("File open fail!\n");
        return 1;
    }

    printf("Input Name:");
    scanf("%s", P1.Name);
    fprintf(file, "%s\n", P1.Name);

    printf("Input Address:");
    scanf("%s", P1.Address);
    fprintf(file, "%s\n", P1.Address);

    printf("Input ID number of the first 6 digits:");
    scanf("%s", P1.Id.Number1);
    fprintf(file, "%s\n", P1.Id.Number1);

    printf("Input ID number of the last 7 digits :");
    scanf("%s", P1.Id.Number2);
    fprintf(file, "%s\n", P1.Id.Number2);

    state=fclose(file);
    if(state!=0)
    {
        printf("File close fail!\n");
        return 1;
    }

    return 0;
}