/* 파일명: ex15-04-function.c */

#include <stdio.h>

// 매개변수 x, 리턴 x - 호출시 실행하고 끝나는 함수
void guide(void)
{
    printf("inputNumber 함수를 통해 정수를 입력할 수 있습니다.\n");
    printf("또한 printNumber 함수를 통해 입력한 정수를 출력할 수 있습니다. \n");
}

// 매개변수 o, 리턴 x - 호출시 입력값을 받아 실행하는 함수
void printNumber(int num)
{
    printf("당신이 입력한 정수는 %d입니다.\n", num);
}

// 매개변수 x, 리턴 o - 호출시 실행 후 반환값을 돌려준다
int inputNumber(void)
{
    int num;
    printf("정수를 입력해 주세요: ");
    scanf("%d", &num);

    return num;
}

int main(void)
{
    guide();

    int num = inputNumber();

    printNumber(num);


    return 0;
}