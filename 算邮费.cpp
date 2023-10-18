#include <stdio.h>
int main(int argc, char *argv[])
{
	long a,b,c;
	printf("输入重量：");
	scanf("%d",&a);
	if(a<=1000)
    	printf("8元");
    else
     	if(a%500==0)
     	{
    	b=(a-1000)/500*4+8;
    	printf("%d",b);
     	}
        else
        {
        c=(a-1000)/500*4+12;
        printf("%d",c);
        }
	return 0;
}