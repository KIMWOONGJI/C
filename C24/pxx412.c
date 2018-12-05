#include<stdio.h>

struct Favorite
{
    char Hobby[30];
    char Food[30];
};

int main(int argc, const char* argv[])
{
    int state;
    struct Favorite P1;

    FILE* file=fopen("mystory.txt", "at");
    if(file==NULL)
    {
        printf("File open fail!\n");
        return 1;
    }

    printf("What is your hobby?:");
    scanf("%s", P1.Hobby);
    fprintf(file, "%s\n", P1.Hobby);

    printf("What is your food?:");
    scanf("%s", P1.Food);
    fprintf(file, "%s\n", P1.Food);

    state=fclose(file);
    if(state!=0)
    {
        printf("File close error!\n");
        return 1;
    }

    return 0;
}