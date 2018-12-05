#include<stdio.h>

int main(int argc, const char *argv[])
{
    int state;
    char ch;

    FILE *file1=fopen(*(argv+1), "rb");
    if(file1==NULL)
    {
        puts("File open error!");
        return 1;
    }

    FILE *file2=fopen(*(argv+2), "wb");
    if(file2==NULL)
    {
        puts("File open error!");
        return 1;
    }

    while(1)
    {
        ch=fgetc(file1);
        if(feof(file1)!=0)
        {
            break;
        }
        fputc(ch, file2);
    }

    state=fclose(file2);
    if(state!=0)
    {
        puts("File close error!");
        return 1;
    }

    state = fclose(file1);
    if (state != 0)
    {
        puts("File close error!");
        return 1;
    }

    return 0;
}