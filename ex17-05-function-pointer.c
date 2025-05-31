/* 파일명: ex17-05-function-pointer.c

함수 포인터
    함수도 메모리 주소가 존재
    함수의 이름이 함수가 저장되는 메모리 공간의 주소값을 가지고 있다
*/

#include <stdio.h>

void myFunc(int num1, int num2)
{
    printf("num1: %d, num2: %d\n", num1, num2);
}

int runFunc(int (*fptr)(int, int), int num1, int num2) 
{
    fptr(num1, num2);
}

int main(void)
{
    /*
    함수 포인터 선언
        타입 (*포인터변수명)(함수의 매개변수 타입들)
    */
    int (*fptr)(int, int);
    fptr = myFunc;

    fptr(9, 6);

    runFunc(fptr, 99, 33);

    return 0;
}