/* 파일명: ex07-04-conditional.c

1-4 switch 문
    특정 변수의 값을 기준으로 여러 경우(case) 중
    하나를 선택하여 실행할 수 있는 제어문

    switch(변수) {
        case 값1:
            // 변수가 값1일 때 실행할 코드
            break;
        case 값2:
            // 변수가 값2일 때 실행할 코드
            break;
        default:
            // 일치하는 case가 없을 때 실행할 코드
    }

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
            printf("HOLD\n");
    }

    /*
    환불 단계
    1. 환불신청
    2. 환불검토 (검토중)
    3. 이체중
    4. 환불완료

    상태값이 1,2,3일 때 환불신청을 막아야한다!!!   
    
    */

    int returnStateCode = 1;    // 환불신청

    switch (returnStateCode)
    {
        case 1:
        case 2:
        case 3:
            printf("죄송합니다. 환불이 진행중이어서 환불 신청이 불가능합니다.\n");
    }

    if(returnStateCode == 1 || returnStateCode == 2 || returnStateCode == 3) {
        printf("죄송합니다. 환불이 진행중이어서 환불 신청이 불가능합니다.\n");
    }






    return 0;
}