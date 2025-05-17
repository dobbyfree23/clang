/* 파일명: ex06-02-operator.c

5. 비트 연산자
    비트 단위 연산을 한다
    &: 비트가 모두 1이면 1 (비트 AND 연산자)
    |: 비트 중 하나라도 1이면 1 (비트 OR 연산자)
    ^: 비트가 서로 다르면 1 (비트 XOR 연산자)
    ~: 비트가 1이면 0, 0이면 1로 반전 (비트 NOT 연산자)

*/
#include <stdio.h>

int main(void)
{
    int a = 3;
    int b = 5;

    printf("3 & 5 = %d\n", a & b);  // 3 & 5 = 1
    printf("3 | 5 = %d\n", a | b);  // 3 | 5 = 7
    printf("3 ^ 5 = %d\n", a ^ b);  // 3 ^ 5 = 6
    printf("~3 = %d\n", ~a);        // ~3 = -4


    return 0;
}
