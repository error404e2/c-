#include <stdio.h>
int main(int argc, char *argv[])
{
	int a;
	printf("������Ľ���");
	scanf("%d",&a);
	if(a>=100000000)
	printf("���լ");
	if(a>=10000000)
	printf("����ͧ");
	if(a>=1000000)
	printf("��������");
	if(a<1000000)
	printf("��������");
	return 0;
}