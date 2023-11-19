#include <stdio.h>
int main(void){
    int a[3][5]={
                {3,12,3,1,4},
                {4,6,1,7,3},
                {3,4,2,5,7}
                };
    int b[3][5];
    int x,i;
    for(i=0;i<3;i++){
        for(x=0;x<5;x++){
            printf("%d   ",a[i][x]);
            b[i][x]=2*a[i][x];
            printf("%d   ",b[i][x]);
        }
    }
}