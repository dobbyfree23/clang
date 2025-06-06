/* 파일명: ex13-06-string-function.c
    
    4. strcat(str1, str2)
        문자열 이어 붙이기
    5. strncat(str1, str2, count)
        원하는 개수만큼 문자열 이어 붙이기
    6. strcmp(str1, str2)
        두 문자열 비교 같으면 0, 같지 않으면 0이 아닌 값을 반환
    7. strncmp(str1, str2, count)
        count개 문자열 비교 같으면 0, 같지 않으면 0이 아닌 값을 반환
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50] = "Michael ";
    char str2[50] = "Michael ";

    strcat(str1, "Bolton");
    puts(str1);

    strncat(str2, "Jackson Five", 7);
    puts(str2);


    printf("비교결과: %d\n", strcmp(str1, str2));
    printf("비교결과: %d\n", strncmp(str1, str2, 7));

    return 0;
}