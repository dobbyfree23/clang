/*
파일명: ex09-02-array.c

문자열
    문자의 배열이다.
    문자들의 연속된 시퀀스를 나타내며,
    문자열 종료 문자인 NULL문자('\0')로 끝난다.

NULL문자('\0')
    문자열 끝을 나타내는 특수한 문자이다.
*/

#include <stdio.h>

int main(void)
{
    char greet[] = "Hello, Guys!";
    printf("%s\n", greet);
    printf("1차원 배열 greet의 길이는: %d\n", sizeof(greet));

    char mind[30] = "I Love Programming!";
    printf("%s\n", mind);
    // "I Love \0rogramming!"
    mind[7] = '\0';
    printf("%s\n", mind);

    printf("%c\n", mind[8]);

    printf("%d\n", sizeof(mind));

    return 0;
}