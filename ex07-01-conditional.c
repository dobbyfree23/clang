/*
파일명: ex07-01-conditional.c

조건문
    조건식의 결과에 따라 별도의 명령을 수행하도록 제어하는 코드

1-1. if문

    if(조건식) {
        조건이 참일 경우 수행할 코드
    }

    if(조건식)
        수행할 코드; (코드가 하나일 경우)

*/

#include <stdio.h>

int main(void) 
{
    // if문
    int num = 3;
    if(num < 3) {
        printf("num is small than 3!\n");
    }

    if(num == 3) printf("num is 3!\n");
    

    if(num > 3) {
        printf("num is bigger than 3!\n");
    }


    

    return 0;
}
