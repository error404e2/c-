#include <stdio.h>
int main(void){
    int a;
    int i=0;
    int x=1;
    int t;
    int y;
    printf("输入一个整数：");
    scanf("%d",&a);
    t=a;
    while(a>0){
        a/=10;
        i++;
    }
    while(i>1){
        x*=10;
        i--;
    }
    for(;t>0;){
        y=t/x;
        t%=x;
        x/=10;
        switch(y){
            case 0:printf("ling ");break;
            case 1:printf("yi ");break;
            case 2:printf("er ");break;
            case 3:printf("san ");break;
            case 4:printf("si ");break;
            case 5:printf("wu ");break;
            case 6:printf("liu ");break;
            case 7:printf("qi ");break;
            case 8:printf("ba ");break;
            case 9:printf("jiu ");break;
        }
    }
}