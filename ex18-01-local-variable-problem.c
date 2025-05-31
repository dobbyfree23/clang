/* 파일명: ex18-01-local-variable-problem.c

지역변수 한계
    포인터 참조 반환(return) 값은 NULL 된다

*/
#include <stdio.h>

char* getString(void)
{
    char str[100];
    printf("좋아하는 단어는? ");

    gets(str);

    printf("함수 안에서 결과: %s\n", str);
    printf("%p\n", str);
    

    return str; // str 소멸로 Null 반환
    
}

int testFunc() {

    int num1 = 10;
    int num2 = 20;
    int result = num1 + num2;

    return result;

}


int main(void)
{
    int mainResult = testFunc();
    printf("%d\n", mainResult);

    printf("%p\n", getString());    
    
    // char *result = getString();
    // printf("%p\n", result);
    // printf("당신이 좋아하는 단어는: %s\n", result);

    return 0;
}