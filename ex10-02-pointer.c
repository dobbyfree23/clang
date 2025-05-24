/* 파일명: ex10-02-pointer.c */

#include <stdio.h>

int main(void)
{
    int num = 10;
    int num2 = 20;
    int *pnum;
    pnum = &num;

    printf("%d\n", *pnum);      // 10

    num = 14;

    printf("%d\n", *pnum);      // 14

    *pnum = 30;

    printf("%d\n", num);        // 30

    (*pnum)++;                  
    (*pnum)++;                  

    printf("%d\n", num);        // 32

    return 0;
}