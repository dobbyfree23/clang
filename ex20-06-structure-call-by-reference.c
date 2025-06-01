/* 파일명: ex20-06-structure-call-by-reference.c
예제
*/

#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;

}Point;

void setPosSameValue(Point* ptr)
{
    if(ptr->xpos > ptr->ypos){
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
    Point position1 = {23, 66};
    Point position2 = {6, 3};

    // 주소값 전달
    setPosSameValue(&position1);
    setPosSameValue(&position2);

    // 각 포인트를 출력
    printPoint(position1);
    printPoint(position2);


    return 0;
}


