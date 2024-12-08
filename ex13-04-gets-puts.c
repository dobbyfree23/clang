/*
파일명: ex13-04-gets-puts.c

gets() - 문자열 입력 함수

puts() - 문자열 출력 함수

*/

#include <stdio.h>


int main(void)
{

    char ch[30];

    gets(ch);

    puts(ch);   // 자동으로 줄바꿈
    puts(ch);

    return 0;
}