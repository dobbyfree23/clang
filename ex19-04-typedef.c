/*
파일명: ex19-04-typedef.c

typedef
    자료형 이름을 마음대로 붙일 수 있다.
    자료형 이름이 추가된거지 기존 자료형 이름이 변경된건 아니다.

*/

#include <stdio.h>

typedef int INT;
typedef int* PINT;
typedef unsigned UINT;

int main(void)
{
    typedef char CHAR;
    typedef char* STR;

    //  typedef 선언 이후 자료형은 기존 자료형과 동일한 역할 수행
    INT num = 3;    // int num = 3;
    PINT ptr = &num;
    UINT unum = 5;

    CHAR ch = 'c';
    STR str = "Hello!";

    printf("%d %d %d %c %s", num, *ptr, unum, ch, str);
     
    return 0;
}