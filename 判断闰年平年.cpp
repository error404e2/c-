#include <stdio.h>
int main(int argc, char *argv[])
{
	int a;
	printf("输入一个年份：");
	scanf("%d",&a);
	if(a%4==0&&a%100!=0&&a%400==0)
	printf("闰年");
	else
	printf("平年");
	return 0;
}