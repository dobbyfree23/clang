/*
파일명: ex15-07-static.c

static 변수(정적변수)
    static 키워드는 함수내부(지역), 함수외부(전역)에서도 사용가능
    프로그램이 시작될 때 할당되고 프로그램이 끝날때 소멸된다.

*/

#include <stdio.h>

int gNumber = 10;


void increaseNumber()
{
    static int number = 0;  // 접근제한을 위한 static 변수 선언
    
    number++;
    printf("number: %d\n", number);

}

int main(void)
{
    printf("전역변수: %d\n", gNumber);
    // printf("static 변수: %d\n", number);
    

    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();

    return 0;
}

