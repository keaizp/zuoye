#include<stdio.h>
#include<string.h>
void count(char *p,int n)
{
    int i,ndigit=0,nchar=0,blank=0,nother=0;
    for(i=0;i<n;i++)
    {
        if(p[i]>='0'&&p[i]<='9')
            ndigit++;
        else if((p[i]>='A'&&p[i]<='Z')||(p[i]>='a'&&p[i]<='z'))
            nchar++;
        else if(p[i]==' ')
            blank++;
        else
            nother++;
    }
    printf("���ָ���Ϊ��%d\n",ndigit);
    printf("��ĸ����Ϊ��%d\n",nchar);
    printf("�ո����Ϊ��%d\n",blank);
    printf("�����ַ�����Ϊ��%d\n",nother);
}


int main()
{
    char a[100]={NULL};
    printf("������һ���ַ�:");
    gets(a);
    count(a,strlen(a));
    return 0;
}