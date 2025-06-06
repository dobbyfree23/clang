/* 파일명: ex16-04-call-by-reference.c

call by reference
    포인터 매개변수, 주소값을 전달
*/

#include <stdio.h>

void swapNumber(int* num1, int* num2){

    int temp = *num1;   // int temp = number1
    *num1 = *num2;      // number1 = number2
    *num2 = temp;       // number2 = temp

    printf("함수 안 확인 결과 *num1: %d, *num2: %d\n", *num1, *num2);
}

int main(void)
{
    int number1 = 33, number2 = 99;

    // 00000000005FFE9C 00000000005FFE98
    printf("%p %p\n", &number1, &number2);

    swapNumber(&number1, &number2);
    printf("함수 호출 후 확인결과 number1: %d, number2: %d\n", number1, number2);

    return 0;
}