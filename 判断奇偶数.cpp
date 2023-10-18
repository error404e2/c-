#include <stdio.h>
int main(int argc, char *argv[])
{
	short a;
	printf("输入一个整数："); 
	scanf("%d",&a);
	if(a%2==0)
	    printf("even");
    else
	    printf("odd");
	return 0;
}