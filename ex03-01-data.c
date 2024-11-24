/*
파일명: ex03-01-data.c

데이터 표현방식
    - 컴퓨터는 2진수로 표현(bit)

    정수 표현
        부호비트(Most Significant Bit) + 수치비트

    실수 표현(부동소수)
        지수부(e)비트 + 가수부(m)비트
    실수 표현 수식
        ±(1.m)*2^(e-127)
    부동소수점오차
        정확한 실수표현 불가능 근사치값으로 인해 생긴 오차

*/

#include <stdio.h>

int main(void)
{
    float fNum = 0.0;
    double dNum = 0.0;

    // 반복문

    /*
        for(초기식; 조건식; 증감식){ 
            반복실행할 코드 
        }
    */
    for(int i = 0; i < 100; i++) {
        // 1: i=0, i < 100 참, fNum = 0.2, i=1
        // 2: i < 100 참, fNum = 0.3, i=2
        // 3: i < 100 참, fNum = 0.4, i=3
        // ...(반복)
        // 99: i < 100 참, fNum = 10, i=100
        // 100: i=99, 99<100, fNUM=10.000002
        fNum = fNum + 0.1;
        dNum = dNum + 0.1;
        
    }
    for(int i = 0; i < 100; i++) {
        // 1: i=0, i < 100 참, fNum = 0.2, i=1
        // 2: i < 100 참, fNum = 0.3, i=2
        // 3: i < 100 참, fNum = 0.4, i=3
        // ...(반복)
        // 99: i < 100 참, fNum = 10, i=100
        // 100: i=99, 99<100, fNUM=10.000002
        fNum = fNum + 0.1;
        dNum = dNum + 0.1;
        
    }
    
    printf("fNum: %.20f\n", fNum);
    printf("dNum: %.20f\n", dNum);

    /*
    fNum: 10.00000190734863281250
    dNum: 9.99999999999998046007
    */
    return 0;
}




