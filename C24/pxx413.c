#include<stdio.h>

int main(int argc, const char *argv[])
{
    int state;
    int ch;
    FILE *file=fopen("mystory.txt", "rt");
    if(file==NULL)
    {
        puts("File open error!");
        return 1;
    }

    while(1)
    {
        ch=fgetc(file);

        if(feof(file)!=0)
        {
            break;
        }

        putc(ch, stdout);
    }

    state=fclose(file);
    if(state!=0)
    {
        puts("File close error!");
        return 1;
    }

    return 0;
}