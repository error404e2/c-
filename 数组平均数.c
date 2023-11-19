#include <stdio.h>
int main(void){
    double a[3][5]={{1,3,5,7,4},
                    {2,5,3,6,8},
                    {3,5,1,3,5}
                    };
    int i,x;
    double sum;
    int max=a[0][0];
    for(i=0;i<3;i++){
        for(x=0;x<5;x++){
            sum+=*(*(a+i)+x);
            }
        }
    printf("%lf\n",sum);
    printf("%lf\n",sum/15);
    for(i=0;i<3;i++){
        for(x=0;x<5;x++){
            if(max<=a[i][x]){
                max=a[i][x];
            }
        }
    }
    printf("%d",max);
}