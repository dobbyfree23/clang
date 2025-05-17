/* 파일명: ex06-04-operator.c

7. 증감 연산자
    ++ : 변수의 값을 1 증가 시킨다
    -- : 변수의 값을 1 감소 시킨다
*/

#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 1;

    printf("1-1) 전위 증감연산자: %d\n", ++i);  // i = i + 1 후 printf 실행
    printf("1-2) i의 값: %d\n", i);

    printf("2-1) 후위 증감연산자: %d\n", j++);  // printf 실행 후  i = i + 1;
    printf("2-2) j의 값: %d\n", j);

    return 0;
}