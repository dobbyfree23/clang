/* 파일명: ex15-07-static.c

static 변수
    static 키워드 함수내부(지역), 함수외부(전역)에서도 사용 가능
    프로그램이 시작될 때 할당되고 프로그램이 끝날 때 소멸된다

    선언된 파일 내에서만 접근 가능

*/

#include <stdio.h>

int gNumber = 10;   // 전역변수

void increaseNumber()
{
    static int number = 0;
    int localNumber = 0;

    number++;
    localNumber++;
    gNumber++;
    printf("number: %d\n", number);
    printf("localNumber: %d\n", localNumber);
    printf("gNumber: %d\n", gNumber);

}

int main(void)
{
    printf("%d\n", gNumber);
    

    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();

    return 0;
}
