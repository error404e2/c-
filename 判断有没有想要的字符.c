#include <stdio.h>
void is_within(char x, char *y){
    for(;*y++!='\0';){
        if(x==*y){
            printf("1");
            break;
        }
    }
}
int main(void){
    char x='w';
    char *y="a5w573443w4656w6653w";
    is_within(x,y); // 这里应该写 x 和 y 的值
}
