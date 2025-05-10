/* 파일명: ex02-01-variable.c

변수
    메모리 공간에 붙여진 이름
    C 프로그램 사용되는 모든 값을 메모리 공간에 저장
    변수를 통해 메모리 공간에 쉽게 접근할 수 있다

변수 기본형식
    자료형 변수명 = 값;


변수명 규칙
    알파벳, 숫자, 언더바(_) 로만 구성
    숫자로 시작(X)
    공백 포함(X)
    키워드 변수명(X)

주의! - C언어는 알파벳 대/소문자 구분한다

*/
#include <stdio.h>

int main(void) 
{
    int number1; // 정수형 변수 선언
    number1 = 1; // 변수 초기화
    int number2 = 2; // 변수 선언 및 초기화
    

    printf("%d %d\n", number1, number2);
    printf("%d %d\n", number2, number1);

    // int hello boy = 3;   // 공백 포함 컴파일 오류
    // int hi#$ = 5;   // 특수기호 사용 컴파일 오류
    // int 8number = 8;    // 숫자로 시작 컴파일 오류
    // int short = 3;  // 기능이 있는 키워드 컴파일 오류
  
    return 0;
}