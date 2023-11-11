#include <stdio.h>
int main(void){
    printf("输入你的钱数");
    int x;
    scanf("%d",&x);
    int a,b,c;
    for(a=1;a<=x*10;a++){
        for(b=1;b<=x*10/2;b++){
            for(c=1;c<=x*10/5;c++){
                if(a+b*2+c*5==x*10)
                {
                printf("可以用%d个一角加%d个2角加%d个五角得到%d元\n",a,b,c,x);
                goto out;
                }
            }
        }
    }
    out:
        return 0;
}
