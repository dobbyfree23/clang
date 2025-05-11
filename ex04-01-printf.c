/* 파일명: ex04-01-printf.c

printf() 함수
    콘솔 화면에 문자열 출력 함수

이스케이프 문자(Escape Sequence)
    \n  줄바꿈
    \t  탭(tab)
    \b  한 칸 왼쪽으로 이동
    \r  맨 앞으로 이동
    \a  경고음
    \'  작은 따옴표
    \"  큰 따옴표
    \?  물음표
    \\  백슬래시

형식문자(서식문자)
    %d: 부호있는 10진수
    %u: 부호없는 10진수
    %o: 부호없는 8진수
    %x: 부호없는 16진수
    %f: 10진수 방식의 부동소수점 실수
    %c: 값에 대응하는 문자
    %s: 문자열
    %p: 포인터 주소값
    %%: %를 출력문자로
*/

#include <stdio.h>

int main(void)
{
    // 이스케이프

    printf("\"I am a boy.\"\n");
    printf("I am a \'boy\'.\n");
    printf("I\tam\ta\tboy.\n");
    printf("I am a boy\\\?\n");

    // 형식문자
    char character = 'H';
    int num = 548;
    printf("%5c\n", character);  // 5칸 확보 후 오른쪽 정렬로 문자 출력
    printf("%-5c\n", character); // 5칸 확보 후 왼쪽 정렬로 문자 출력

    printf("%10d\n", num);
    printf("%-10d\n", num);

    float fnum = 1.234567f;
    printf("%10f\n", fnum);     // 10칸 확보 후 오른쪽 정렬 실수 출력(기본 소수점 6자리)
    printf("%10.3f\n", fnum);   // 10칸 확보 후 오른쪽 정렬 실수 출력(소수점 3자리)
    printf("%-10.3f\n", fnum);  // 10칸 확보 후 왼쪽 정렬 실수 출력(소수점 3자리)
    

    

    return 0;
}
