/* 파일명: ex08-07-nested-loop.c

중첩 반복문
    하나의 반복문 안에 다른 반복문이 포함되어 있는 구조

*/

#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 7; i++){
        /*
        i = 0, 1
        조건 i < 7  i가 7일때는 실행 안함
            j = 0, 1, 2, 3, 4, 5, 6, 7
            조건 j < i+1
            i          j 0123456 
            0  printf -> *
            1  printf -> **
            2  printf -> ***
            3  printf -> ****
            4  printf -> *****
            5  printf -> ******
            6  printf -> *******
            7  for문 종료


        */


        for(int j = 0; j < i+1; j++) {
            printf("*");
        }

        printf("\n");

    }

    return 0;
}
