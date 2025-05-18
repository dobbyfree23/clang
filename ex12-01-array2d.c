/* 파일명: ex12-01-array2d.c

2차원 배열
    배열 안에 배열
*/

#include <stdio.h>

int main(void)
{
    // 2x3 2차원배열
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 2차원배열 값 가져오기
    printf("%d\n", arr[0][2]);
    printf("%d\n", arr[1][1]);

    // Quiz for문으로 2차원배열 전체출력 하기!

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);

        }
        printf("\n");
    }



    return 0;
}