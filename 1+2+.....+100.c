#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=0, num=0,x;
	while(i<100){
	  i++;
	  num+=i; 
	  printf("i=%d,num=%d\n",i,num);
	}
	printf("%d",num);
	return 0;
}
