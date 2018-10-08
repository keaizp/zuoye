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
    printf("数字个数为：%d\n",ndigit);
    printf("字母个数为：%d\n",nchar);
    printf("空格个数为：%d\n",blank);
    printf("其它字符个数为：%d\n",nother);
}


int main()
{
    char a[100]={NULL};
    printf("请输入一串字符:");
    gets(a);
    count(a,strlen(a));
    return 0;
}