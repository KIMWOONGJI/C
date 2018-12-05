#include<stdio.h>

char person[3][3][20];

int main(int argc, char const *argv[])
{
    for(int i = 0; i < 3; i++)
    {
        printf("이름, 전화번호, 주소 순으로 입력: ");
        scanf("%s %s %s", person[i][0], person[i][1], person[i][2]);
    }

    printf("입력 결과는 다음과 같습니다.\n");

    for (int i = 0; i < 3; i++)
    {
        printf("이름: %s, ", person[i][0]);
        printf("전화번호: %s, ", person[i][1]);
        printf("주소: %s\n", person[i][2]);
    }

    return 0;
}
