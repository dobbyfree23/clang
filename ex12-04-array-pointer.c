/*
파일명: ex12-04-array-pointer.c
*/

#include <stdio.h>

int main(void)
{
    int iarr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*iarrpnt)[3] = iarr;  // int iarrpnt = {1, 2, 3, 4, 5, 6}
        
    printf("%d\n", iarr[0][1]);
    printf("%d\n", *(iarrpnt+1)[0]);

    return 0;
}