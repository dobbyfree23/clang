/*
파일명: ex16-06-recursive-function.c
*/
#include <stdio.h>

/* 스택메모리
main()
    sayHello(1)
        count = 1
        printf("Hello\n");
        sayHello(2)
            count = 2
            printf("Hello\n");
            sayHello(3)
                count = 3
                printf("Hello\n");
                return 0;

*/


int sayHello(int count)     
{

    printf("Hello\n");

    if(count == 3) {
        return 0;
    }

    sayHello(count + 1);
}

int main(void)
{
    // 재귀함수 호출
    sayHello(1);

    return 0;
}