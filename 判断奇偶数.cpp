#include <stdio.h>
int main(int argc, char *argv[])
{
	short a;
	printf("����һ��������"); 
	scanf("%d",&a);
	if(a%2==0)
	    printf("even");
    else
	    printf("odd");
	return 0;
}