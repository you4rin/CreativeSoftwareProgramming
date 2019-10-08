#include <stdio.h>

typedef struct{
    int xpos;
    int ypos;
}Point;

Point getScale2xPoint(const Point* p){
    printf("Calling getScale2xPoint()\n");
    Point p2;
    p2.xpos=2*(p->xpos);
    p2.ypos=2*(p->ypos);
    return p2;
}

void swapPoints(Point* p1,Point* p2){
    printf("Calling swapPoint()\n");
    Point temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main(){
    Point p1, p2;
    scanf("%d %d",&(p1.xpos),&(p1.ypos));
    p2=getScale2xPoint(&p1);
    printf("P1 : %d %d\nP2 : %d %d\n",p1.xpos,p1.ypos,p2.xpos,p2.ypos);
    swapPoints(&p1,&p2);
    printf("P1 : %d %d\nP2 : %d %d\n",p1.xpos,p1.ypos,p2.xpos,p2.ypos);
    return 0;
}
