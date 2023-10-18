#include <stdio.h>
int main(int argc, char *argv[])
{
	int a;
	printf("输入你的奖金：");
	scanf("%d",&a);
	if(a>=100000000)
	printf("买豪宅");
	if(a>=10000000)
	printf("买游艇");
	if(a>=1000000)
	printf("环游世界");
	if(a<1000000)
	printf("做白日梦");
	return 0;
}