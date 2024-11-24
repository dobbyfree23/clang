/*
파일명: ex03-02-unsigned.c

unsinged 자료형
    부호 없는 데이터
    0이상 표현
    음수포기 대신 양수 표현 범위가 커진다
*/
#include <stdio.h>

int main(void)
{
    char cnum = 128;    // char형의 최대값은 127이다.
    unsigned char u_cnum = 255;   // 0 ~ 255
    short snum = 32768; // short형의 최대값은 32767이다.
    unsigned short u_snum = 32768;

    printf("%d\n", cnum);
    printf("%d\n", u_cnum);
    printf("%d\n", snum);
    printf("%d\n", u_snum);

    return 0;
}










