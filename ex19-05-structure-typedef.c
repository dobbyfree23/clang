/* 파일명: ex19-05-structure-typedef.c

구조체와 typedef
    구조체 이름도 typedef 선언 대상이 될 수 있다

*/

#include <stdio.h>

typedef struct 
{
    int x;
    int y;
}POINT;

struct person
{
    char name[30];
    int age;
};

// 정의된 구조체에 대한 typedef
typedef struct person PERSON;

int main(void)
{
    POINT postion = {30, 60};
    PERSON saram = {"김사랑", 10};

    printf("%d %d\n", postion.x, postion.y);
    printf("%s %d\n", saram.name, saram.age);

    return 0;
}








