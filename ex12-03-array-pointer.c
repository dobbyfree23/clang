/*
파일명: ex12-03-array-pointer.c

배열 포인터
    배열을 가리키는 포인터변수를 의미
*/

#include <stdio.h>

int main(void)
{
    // 2개의 행과 3개의 열로 이루어진 2차원 배열
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };


    // 열이 3개인 2차원 배열 포인터
    int (*arrpnt)[3] = arr;

    printf("arr: %p\n", arr);
    printf("arrpnt: %p\n", arrpnt);


    for(int i = 0; i < 2; i++) {

        for(int j = 0; j < 3; j++) {
            // 배열을 사용하여 출력
            // printf("%d ", arrpnt[i][j]);
            printf("%d ", (*(arrpnt+i))[j]);

        }

        printf("\n");

    }
    



    return 0;
}