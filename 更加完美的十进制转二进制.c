#include <stdio.h>
int main (void){
    puts("输入一个十进制数");
    int a;
    scanf("%d",&a);
    unsigned long long x=1u<<31;
    printf("%d的二进制是:",a);
    while(x){
        printf("%d",x&a?1:0);
        x>>=1;
    }
}