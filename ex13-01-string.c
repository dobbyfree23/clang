/* 
파일명: ex13-01-string.c

문자열
    C언어에서 문자열은 큰따옴표(")를 이용해서 표현
    문자열은 문자(char)로 이루어진 배열
    문자열 끝은 '\0'(NULL 문자)로 표시

*/

#include <stdio.h>

int main(void)
{
    char good[] = "GOOD!";  // {'G', 'O', 'O', 'D', '!', '\0'}
    char *bad = "Bad!";     //  'B', 'a', 'D', '!', '\0'

    printf("1) bad주소값: %p\n", bad);

    printf("1-1) %s\n", good);
    printf("1-2) %s\n", bad);


    // 배열기반 문자열 변수
    good[0] = 'H';  // 요소로 값 변경
    // bad[0] = 'S';    // 요소로 값 변경 불가!

    printf("2-1) %s\n", good);
    printf("2-2) %s\n", bad);

    // good = "New Good"; // 새로운 문자열 대입 불가능!
    bad = "New Bad";      // "New Bad" 새로운 리터럴의 주소값을 반환

    printf("3) bad주소값: %p\n", bad);
    printf("3-1) %s\n", good);
    printf("3-2) %s\n", bad);

    

    return 0;
}