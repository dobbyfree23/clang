/* 파일명: ex18-05-malloc-realloc.c */

#include <stdio.h>
#include <stdlib.h>

#define INITAL_BUFFER_SIZE 1    // 초기 버퍼사이즈 1로 정의

int main(void)
{
    int c; 
    int len = 0;
    int buffer_size = INITAL_BUFFER_SIZE;

    // 동적 메모리 할당으로 문자열 포인터에 메모리공간 할당
    char* str = (char*)malloc(buffer_size);

    if(str == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter a string: "); // 사용자에게 문자열 입력 요청
                                // \n  <= 입력
    while((c = getchar()) != '\n' && c != EOF) {
        /*
        c  = 'e'; 
        len = 5;
        buffer_size = 8;

        c != '\n' && c != EOF
               0     1   2    3    4    5
        str = {'a', 'p', 'p', 'l', 'e', '\0', '', ''};

        */
        str[len++] = c;

        if(len == buffer_size) {
            buffer_size *= 2;   //  버퍼 사이즈를 2배로 늘림
            // 메모리 재할당으로 버퍼사이즈만큼 늘림
            str = realloc(str, buffer_size);
        }
    }

    str[len] = '\0';    // 문자열 끝에 NULL 문자 추가

    printf("You entered: %s\n", str);

    if(str != NULL) free(str);

    return 0;
}