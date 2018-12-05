#include<stdio.h>

struct Employee
{
    char    Name[20];
    char    IDNumber1[20];
    char    IDNumber2[20];
    int     Salary;
};

int main(int argc, char const *argv[])
{
    struct  Employee    p1;

    printf("Type your name: ");
    scanf("%s", p1.Name);

    printf("Type your ID Number of the first 6 digits: ");
    scanf("%s", p1.IDNumber1);
    p1.IDNumber1[6] = '\0';

    printf("Type your ID Number of the  last 7 digits: ");
    scanf("%s", p1.IDNumber2);
    p1.IDNumber2[7] = '\0';

    printf("Type your Salary in $:");
    scanf("%d", &p1.Salary);

    printf("Name        : %s\n", p1.Name);
    printf("ID Number   : %s-%s\n", p1.IDNumber1, p1.IDNumber2);
    printf("Salary      : $ %d\n", p1.Salary);
    
    return 0;
}