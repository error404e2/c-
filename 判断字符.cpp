#include<stdio.h>

int main()
{
    char a;
    printf("请输出一个字\n"); // 在输出后加上换行符\n
    scanf("%s",&a); 
    if(a >= '0' && a <= '9')
    printf("数字\n");
else if((a >= 'A' && a <= 'Z')||(a>='a'&&a<='z')) 
printf("字母\n"); 
    else
    printf("字符\n"); 
    return 0;
}