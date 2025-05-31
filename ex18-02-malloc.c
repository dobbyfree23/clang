/* 파일명: ex18-02-malloc.c

힙(heap) 영역
    사용자(개발자)가 직접관리할 수 있는 메모리 영역
    힙영역은 사용자에 의해 메모리 공간이 동적으로 할당되고 해제된다

메모리 동적할당
    malloc 함수
        사용자(개발자)가 생성 소멸의 시기를 결정할 수 있는 변수 선언
    
    free 함수
        동적으로 할당한 메모리 해제

*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // int형 5개만큼 사이즈로 메모리 공간선언
    int* iptr = (int*)malloc(sizeof(int) * 5);

    // double형 3개만큼 공간선언
    double* dptr = (double*)malloc(sizeof(double) * 3);

    for(int i = 0; i < 5; i++) {
        iptr[i] = 10 * (i + 1);
        printf("iptr[%d]: %d\n", i, iptr[i]);
    }

    dptr[0] = 3.14;
    dptr[1] = 4.31;
    dptr[2] = 1.43;

    if(iptr != NULL) free(iptr);  // 동적으로 할당한 메모리 해제
    if(dptr != NULL) free(dptr);  // 동적으로 할당한 메모리 해제
   
    return 0;
}

