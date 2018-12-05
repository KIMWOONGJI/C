#include<stdio.h>

struct point
{
    int x;
    int y;
};

struct point PointAdd(struct point p1, struct point p2);

int Show(struct point p);

int main(int argc, char const *argv[])
{
    struct point p1={13, 17};
    struct point p2={3, 7};

    Show(p1);
    Show(p2);

    Show(PointAdd(p1, p2));
    return 0;
}

struct point PointAdd(struct point p1, struct point p2)
{
    p1.x+=p2.x;
    p1.y+=p2.y;

    return p1;
}

int Show(struct point p)
{
    printf("%2d %2d\n", p.x, p.y);
    
    return 0;
}
