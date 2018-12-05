#include<stdio.h>

int main(int argc, const char* argv[])
{
    int state;

    /* Open File */
    FILE* file = fopen("Text.txt", "wt");
    if(file==NULL)
    {
        printf("file open error!\n");
        return 1;
    }

    /* Close File */
    state=fclose(file);
    if(state!=0)
    {
        printf("file close error!\n");
        return 1;
    }

    return 0;
}