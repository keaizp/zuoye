#include<stdio.h>
void  zc(char *str1,int a,int b)
{
	int i,j=0;
    char str2[100]={NULL};
    for(i=a;i<=b;i++)
    {
        str2[j]=str1[i];
        j++;
    }
    puts(str2);
}
void main()
{
    int m,n;
	char str1[100]={NULL};
	printf("��������һ���ַ�����\n");
	gets(str1);
	printf("������ʼλ�úͽ���λ�ã�\n");
    scanf("%d%d",&m,&n);
    zc(str1,m,n);
}
