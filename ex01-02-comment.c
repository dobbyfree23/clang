/* 파일명: ex01-02-comment.c 

주석(Commnet)
    프로그램 코드 안에 작성하는 설명문 또는 메모

*/

// 한줄 주석
#include <stdio.h>  // 표준 입출력 함수 사용하기 위한 헤더파일 포함
/*
    main 함수 - 프로그램 시작점!
*/
int main(void)
{   // 코드블럭 - 코드 그룹화
    // 들여쓰기 기준 - Tab    
    printf("Comment, Test!");   // 화면(터미널, 콘솔) "Comment, Test!" 문자열 출력

    return 0;   // 프로그램 정상 종료시 0반환
}