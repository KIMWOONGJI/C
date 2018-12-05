#include<stdio.h>

struct simple
{
    int data1;
    int data2;
};

int show(struct simple s);
int swap(struct simple *pS1, struct simple *pS2);

int main(int argc, char const *argv[])
{
    struct simple s1={1,3};
    struct simple s2={2,4};

    show(s1);
    show(s2);

    swap(&s1, &s2);

    show(s1);
    show(s2);

    return 0;
}

int show(struct simple s)
{
    printf("data1: %d, data2: %d\n", s.data1, s.data2);
    
    return 0;
}

int swap(struct simple *pS1, struct simple *pS2)
{
    struct simple temp;

    temp=*pS1;
    *pS1=*pS2;
    *pS2=temp;

    return 0;
}