/* 파일명: ex16-05-recursive-function.c

재귀함수
    자기 자신을 호출하는 함수
    반복문 비슷

*/

#include <stdio.h>
/*
스택메모리
main()
     sayHello() - Hello!
        sayHello() - Hello!
            sayHello() - Hello!
                sayHello() - Hello!
                    sayHello() - Hello!
                        sayHello() - Hello!
                            sayHello() - Hello!
*/

void sayHello(void)
{
    printf("Hello!\n");
    sayHello();
}

int main(void)
{
    // 재귀함수 호출
    sayHello();

    return 0;
}

