/*
파일명: ex16-01-function-array.c

배열을 전달받는 함수
    배열의 이름을 전달하는 것은 포인터를 전달하는 것으로
    매개 변수를 포인터 변수로 만들면된다.

*/

#include <stdio.h>

int readArray(int* arr, int length) // int* arr =  005FFE90, int length = 3
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