#include<stdio.h>

int main(int argc, const char* argv[])
{
    int state;
    char buf[30];

    FILE* file = fopen("Text.txt","rt");
    if(file==NULL)
    {
        printf("file open error!\n");
        return 1;
    }
/*
    puts("Don't Worry!");

    fputs("Don't Worry!\n", stdout);

    fputs("Don't Worry!\n", file);
*/
    fputs("Input a data: ", stdout);
    fgets(buf, sizeof(buf), stdin);
    puts(buf);

    fgets(buf, sizeof(buf), file);
    puts(buf);

    state=fclose(file);
    if(state!=0)
    {
        printf("file close error!\n");
        return 1;
    }

    return 0;
}