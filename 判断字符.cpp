#include<stdio.h>

int main()
{
    char a;
    printf("�����һ����\n"); // ���������ϻ��з�\n
    scanf("%s",&a); 
    if(a >= '0' && a <= '9')
    printf("����\n");
else if((a >= 'A' && a <= 'Z')||(a>='a'&&a<='z')) 
printf("��ĸ\n"); 
    else
    printf("�ַ�\n"); 
    return 0;
}