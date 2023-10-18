#include <stdio.h>
int main(int argc, char *argv[])
{
	short x;
	printf("输入一个整数");
	scanf("%d",&x);
	if(x%3==0)
	printf("3");
	if(x%5==0)
	printf("5");
	if(x%7==0)
	printf("7");
	return 0;
}