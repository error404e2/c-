#include <stdio.h>
int main(void){
    int y,x;
    int i,a;
    int min;
    printf("输入一个分式：");
    scanf("%d %d",&x,&y);
    if(x<=y){
    min=x;
    }
    else{
    min=y;
    }
    for(i=2;i<=min;i++){
            if(x%i==0&&y%i==0){
            printf("%d\n",i);
        }
    }
    i--;
    x=x/i;
    y=y/i;
    printf("%d/%d",x,y);
}