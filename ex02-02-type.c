/* 파일명: ex02-02-type.c

C언어 기본 자료형 종류
    - 문자
        char    1바이트     -128 ~ 127
    - 정수
        short   2바이트     -32,768 ~ 32,767
        int(기본)     4바이트     -2,147,483,648 ~ 2,147,483,647
        long    (운영체제에 따라 달라짐) 4 ~ 8바이트
        long long 8바이트 이상
    - 실수
        float   4바이트     약7-8자리의 유효 십진 자릿수
        double(기본)  8바이트     약15-17자리의 유효 십진 자릿수
        long double 8바이트 이상 double 이상의 표현범위


    sizeof - 데이터타입이나 변수의 메모리 크기를 바이트 단위로 반환
*/

#include <stdio.h>

int main(void)
{
    printf("sizeof(100): %d\n", sizeof(100));
    printf("sizeof(3.14): %d\n", sizeof(3.14));

    char ch1 = 65, ch2 = 'b';
    short sh1 = 67;
    int in1 = 68;

    printf("%c\n", ch1);
    printf("%d\n", ch1);
    printf("%c\n", ch2);
    printf("%d\n", ch2);
    printf("%c\n", sh1);
    printf("%d\n", sh1);
    printf("%c\n", in1);
    printf("%d\n", in1);

    return 0;
}