/* 파일명: ex07-01-conditional.c

제어문 
    프로그램 흐름을 제어하기 위한 문장으로 프로그래밍에서 
    가장 기본적이고 중요한 요소

1. 조건문
    조건식의 결과에 따라 별도의 명령을 수행하도록 제어하는 코드

1-1 if문

    if(조건식) {
        조건이 참일 경우 수행할 코드
    }
*/

#include <stdio.h>

int main(void)
{
    int num = 10;

    if(num < 3) {
        printf("num is small than 3!\n");
    }

    if(num == 3) {
        printf("num is 3!\n");
    }

    if(num > 3) {
        printf("num is bigger than 3!\n");
    }


    return 0;
}