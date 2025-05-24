/* 파일명: ex13-99-lotto.c 

18 7 16 29 45 39
33 34 3 29 42 5
15 13 24 4 17 14
23 5 43 18 44 27
40 4 37 43 45 5

41 35 45 10 26 16
13 37 40 27 45 32
8 19 33 22 5 42 
12 23 2 20 18 22
3 11 12 34 14 22

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int lotto[6] = {0};
    // int lotto[6] = {0, 0, 0, 0, 0, 0};

    int temp;
    int isDuplicate;

    // 난수 생성을 위한 시드 설정
    srand(time(NULL));

    // 6개 로또 번호 생성
    for(int i = 0; i < 6; i++) {

        // 난수 생성 및 중복값 검사
        do {
            isDuplicate = 0;
            
            temp = rand() % 45 + 1;  // 1부터 45사이의 랜덤 숫자 생성

            for(int j = 0; j < i; j++) {
                if(lotto[j] == temp) {
                    isDuplicate = 1;
                    break;
                }
            }
        } while(isDuplicate);

        lotto[i] = temp;
    }

    // 생성된 로또 번호 출력
    for(int i = 0; i < 6; i++) {
        printf("%d ", lotto[i]);
    }

    printf("\n");


    return 0;
}