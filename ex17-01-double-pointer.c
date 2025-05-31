/* 파일명: ex17-01-double-pointer.c

포인터 변수
    메모리에 주소값을 저장하는 변수

더블포인터 변수
    포인터 변수의 주소값을 저장하는 변수
    포인터의 포인터

*/

#include <stdio.h>

int main(void)
{
    int num = 3;

    int *ptr1 = &num;
    int **dptr = &ptr1;
    int *ptr2 = *dptr;

    printf("%p\n", &num);
    printf("%p\n", &ptr1);
    printf("%p\n", &dptr);
    printf("%p\n", &ptr2);

    printf("%d %d %d %d\n", num, *ptr1, **dptr, *ptr2);  

    /* 실행결과
        00000000005FFE9C
        00000000005FFE90
        00000000005FFE88
        00000000005FFE80
        3 3 3 3
    
    */



    return 0;
}
