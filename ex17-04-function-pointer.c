/*
파일명: ex17-04-function-pointer.c

함수 포인터
    함수도 메모리 주소가 존재
    함수의 이름이 함수가 저장된 메모리 공간의 주소값
*/

#include <stdio.h>

int myFunc(int num1, int num2)
{
    printf("num1: %d, num2: %d\n", num1, num2);
}


void runFunc(int (*fptr)(int, int), int num1, int num2) // 함수 포인터 매개변수 int (*fptr)(int, int)
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
   fptr = myFunc;   // 함수포인터 저장

   fptr(9, 6);

    // runFunc(myFunc, 9, 6);


    return 0;
}