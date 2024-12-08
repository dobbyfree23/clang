/*
파일명: ex16-02-function-array.c

매개변수에서만 특별히 허용된 문법
    int arr[] = arr 
일반 변수에서는 
    int *arr = arr

*/

#include <stdio.h>

int readArray(int arr[], int length) // int arr[] =  005FFE90, int length = 3
{
    int i;
    printf("배열의 요소 읽어보기: [ ");
    for(i = 0; i < length; i++) {

        printf("%d", arr[i]);
        if(i + 1 < length) {
            printf(", ");
        } else {
            printf(" ");
        }

    }

    printf("]\n");

}

int main(void)
{
    int arr[3] = {3, 6, 9};
    int length = 3;
    
    printf("arr 주소값: %p\n", arr);

    readArray(arr, length); // 배열의 요소 읽어보기: [ 3, 6, 9 ]

    
    return 0;
}