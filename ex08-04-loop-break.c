/*
파일명: ex08-04-loop-break.c

break 문
    반복문에서 break문은 반복문을 즉시 종료하는 명령어!
*/
#include <stdio.h>

int main(void)
{
    // int num;
    // while (1) {
    //     printf("-1 입력시 종료: ");
    //     scanf("%d", &num);
    //     if (num == -1) {
    //         break;
    //     }

    //     printf("%d을(를) 입력하셨네요.\n", num);
    // }


    int num2 = 0;
    
    while (num2 < 3) {
        /*
        num2 : 2
        num3 : 0
        printf -> "num2 값: 0"
        printf -> "num3 값: 0"
        printf -> "num3 값: 1"
        

        printf -> "num2 값: 1"
        printf -> "num3 값: 0"
        printf -> "num3 값: 1"
        

        printf -> "num2 값: 2"
        printf -> "num3 값: 0"
        printf -> "num3 값: 1"
        
        */
        int num3 = 0;
        printf("num2 값: %d\n", num2);

        while (num3 < 3) {
            if(num3 == 2) break;
            printf("num3의 값: %d\n", num3);
            num3++;
        }
        num2++;
    }

    return 0;
}