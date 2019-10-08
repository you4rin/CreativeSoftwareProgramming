#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc){
    int temp=*pa;
    *pa=*pb;
    *pb=*pc;
    *pc=temp;
}

void rotateRight(int* pa, int* pb, int* pc){
    int temp=*pa;
    *pa=*pc;
    *pc=*pb;
    *pb=temp;
}

int main(){
    int a=10,b=20,c=30;
    int task;
    printf("%d:%d:%d\n",a,b,c);
    while(1){
        scanf("%d",&task);
        if(task==1){
            rotateLeft(&a,&b,&c);
            printf("%d:%d:%d\n",a,b,c);
        }
        else if(task==2){
            rotateRight(&a,&b,&c);
            printf("%d:%d:%d\n",a,b,c);
        }
        else break;
    }
    return 0;
}
