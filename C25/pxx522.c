#include <stdio.h>
#include <stdlib.h>

int ExtendSize(int **pArr, int *pSz);

int main(int agrc, char const **argv){
    int arrSize = 5;
    int index = 0;

    int *arr = (int*)malloc(arrSize*sizeof(int));

    while(1){
        printf("Number ? :");
        scanf("%d", &arr[index]);

        if(arr[index]==-1){
            break;
        }

        if(arrSize==index+1){
            ExtendSize(&arr, &arrSize);
        }

        index++;
    }

    for(int i=0; i<index; i++){
        printf("%d, ", *(arr+i));
    }

    printf("\n");

    free(arr);

    return 0;
}

int ExtendSize(int **pArr, int *pSz){
    int *tempArr = (int*)malloc((*pSz+3)*sizeof(int));

    for(int i=0; i<*pSz; i++){
        *(tempArr+i) = *(*pArr+i);
    }

    free(*pArr);

    *pArr=tempArr;
    *pSz+=3;

    return 0;
}