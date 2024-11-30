/*
파일명: ex06-04-operator.c

7. 증감 연산자
    ++ : 변수의 값을 1 증가시킨다.
    -- : 변수의 값을 1 감소시킨다.
*/
#include <stdio.h>

int main(void)
{
    int i = 1;
    printf("1)전위 증감연산자: %d\n", ++i);  // i+1 출력 i=2
    printf("1-2) i값: %d\n", i);            // i값 2 출력
    printf("2)후위 증감연산자: %d\n", i++);  // i값 출력 후 i+1   
    printf("2-2) i값: %d\n", i);            // i=3 출력


    int j = 1;
    j--;
    printf("3) j값: %d\n", j);

    return 0;
}

