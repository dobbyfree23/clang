/* 파일명: ex15-01-function.c

함수(function)
    하나의 특별한 목적의 작업을 수행하기 위해 
    독립적으로 설계된 프로그램 코드 집합

함수구조

    리턴타입 함수명(매개변수타입 매개변수명)
    {
        // 수행할 코드 집합

        return 리턴값;
    }


    매개변수(parameter)
        함수를 정의할 때 사용되는 변수, 함수의 입력값을 받는 변수
    인자(argument)
        함수를 호출할 때 실제로 전달되는 값, 매개변수에 대입되는 실제 데이터

*/

#include <stdio.h>

// 사용자 정의 함수 선언
int add(int a, int b)   // int a = 3, b = 5
{
    return a + b;
}

int main(void) 
{
    int result;

    // 사용자 정의 함수 호출
    result = add(3, 5);

    printf("함수가 반환한 값: %d\n", result);

    return 0;
}



