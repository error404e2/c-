#include <stdio.h>
char* strncpy1(char *s1[], char *s2, int n){
    int i=0;
    for(i=0;i<=n;i++){
        *s1++=*s2++;
        if(i==n){
            s1[n] ='\0';
            break;
        }
    }
    return s1;
}
int main(void){
    char y[10]="awasawdsa";
    char x[100];
    printf("%s",strncpy1(x,y,8));
}
