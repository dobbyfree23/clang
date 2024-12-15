/*
파일명: ex20-06-sturcture-call-by-reference.c

구조체 Call by reference 예제
*/

#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
}Point;

void setPosSameValue(Point* ptr)    
{   
    // ptr->xpos == (*ptr).xpos
    if (ptr->xpos > ptr->ypos) {
        ptr->ypos = ptr->xpos;
    } else {
        ptr->xpos = ptr->ypos;
    }
}

void printPoint(Point position)
{
    printf("x: %d, y: %d\n", position.xpos, position.ypos);
}

int main(void)
{
    Point postion1 = {66, 66};
    Point postion2 = {6, 3};

    // 주소값 전달
    setPosSameValue(&postion1);
    setPosSameValue(&postion2);

    // 각 포인트를 출력
    printPoint(postion1);
    printPoint(postion2);

    return 0;
}