/*
파일명: ex07-03-conditional.c

1-3 if ~ if else ~ else 문
    if(조건1) {
        조건1 참일 경우 수행할 코드
    } else if(조건2) {
        조건2 참일 경우 수행할 코드
    } else {
        모든 조건들이 거짓일 경우 수행코드
    }

*/
#include <stdio.h>

int main(void)
{
    int score = 75;
    if(score >= 90) {
        printf("A 입니다.\n");
    } else if(score >= 80) {
        printf("B 입니다.\n");
    } else if(score >= 70) {
        printf("C 입니다.\n");
    } else if(score >= 60) {
        printf("D 입니다.\n");
    } else {
        printf("F 입니다.\n");
    }

    return 0;
}



