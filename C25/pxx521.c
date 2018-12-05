#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    int size, i;
    char *str;

    printf("문자열의 최대 길이를 입력하시오.  : ");
    scanf("%d", &size);

    str=(char*)malloc((size+1)*sizeof(char));

    printf("문자열을 입력하시오. : ");

    for(i=0; i<size+1; i++){
        scanf("%c", &str[i]);
    }

    printf("입력받은 문자열은 다음과 같습니다. : ");

    for (i = 0; i < size+1; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    free(str);

    return 0;
}