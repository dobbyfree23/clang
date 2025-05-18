/* 파일명: ex09-01-array.c

배열
    다수의 데이터를 저장하고 처리하기 위해 사용하는 데이터 표현방법
    여러 개의 데이터를 하나의 묶음으로 관리할 수 있는 데이터 구조

*/

#include <stdio.h>

int main(void)
{
    // 길이 정보가 포함된 배열 선언 및 초기화
    int number[3] = {1, 2, 3};

    // 길이 정보가 포함되지 않은 배열 선언 및 초기화
    char characters[] = {'a', 'b', 'c', 'd', 'e'};

    int odd[3]; // 초기화 되지 않은 배열
    odd[0] = 1;
    odd[1] = 3;
    odd[2] = 5;

    printf("%d %d %d\n", odd[0], odd[1], odd[2]);   // 1 3 5

    // for 문을 통한 배열 요소 출력
    for(int i = 0; i < 3; i++){
        printf("%d\n", odd[i]);
    }

    printf("sizeof(odd): %d\n", sizeof(odd)); // sizeof(odd): 12
    printf("sizeof(characters): %d\n", sizeof(characters)); // sizeof(characters): 5




    return 0;
}
