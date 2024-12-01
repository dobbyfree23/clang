/*
파일명: ex08-01-loop.c

반복문
    특정한 부분의 코드가 반복적으로 수행될 수 있도록 하는 구문

1. while 문
    while(조건식) {
        반복 수행할 코드    
    }

*/

#include <stdio.h>

int main(void)
{
    int num = 0;
    /*
    num = 3    
    num < 3 -> 0 거짓
    printf ->  "num is 0 now"
    
    */
    /*
    while(num < 1000) {
        printf("num is %d now\n", num);
        num++;
    }
    */

    int num2 = 0;

    while(num2 != -1) {
        printf("숫자를 입력하세요(-1 입력시 종료): ");
        scanf("%d", &num2);

        if(num2 == -1)
            printf("종료합니다.\n");
        else
            printf("%d을(를) 입력하세요.\n", num2);
    }

    printf("While문 End\n");

    return 0;
}







