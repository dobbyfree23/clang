/*
파일명: ex06-03-operator.c
6. 쉬프트 연산자
    << : 지정한 수만큼 비트들을 전부 왼쪽으로 이동시킴
    >> : 지정한 수만큼 비트를 전부 오른쪽으로 이동시킴

*/

#include <stdio.h>

int main(void)
{
    int x = 7; //  0001
    printf("%d << 2 = %d\n", x, x << 2);
    printf("%d >> 2 = %d\n", x, x >> 2);

    return 0;
}