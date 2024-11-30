/*
파일명: ex07-04-conditional.c

2. switch 문
    특정 변수의 값을 기준으로 여러가지 경우(CASE) 중
    하나를 선택하여 실행할 수 있는 제어문

*/
#include <stdio.h>

int main(void)
{
    char btn = 'A';

    switch(btn) {
        case 'W':
            printf("앞으로 이동\n");
            break;
        case 'A':
            printf("왼쪽으로 이동\n");
            break;
        case 'S':
            printf("뒤로 이동\n");
            break;
        case 'D':
            printf("오른쪽으로 이동\n");
            break;
        default:
            printf("HOLD!\n");
            break;
        }


    /*
    환불 단계
    1. 환불신청
    2. 환불검토 (검토중)
    3. 이체중
    4. 환불완료
    
    */

   int returnStatCode = 1;

    switch(returnStatCode) {
        case 1:
        case 2:
        case 3:
            printf("환불 불가상태 입니다. 상태코드: %d\n", returnStatCode);
            break;
    }

    if(returnStatCode == 1 || returnStatCode == 2 || returnStatCode == 3) {
        printf("환불 불가상태 입니다. 상태코드: %d\n", returnStatCode);
    }

    return 0;
}
