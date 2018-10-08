#include<stdio.h>
void zhishu(int *a){
	int n=0,i,j;
		for(i=2;i<=1000;i++)
		{
			for(j=2;j<=i-1;j++)
			{
				if(i%j==0)break;
			}
			if(i==j)
			{a[n]=i;
			n++;
			if(n==50)break;}
		}
}
void main(){

	int n,i=0,k,a[50]={0};//用一个数组存储质数
	zhishu(a);
	scanf("%d",&n);
	while(n!=1){
		if(n%a[i]!=0)
		{i++;}
		else
		{n=n/a[i];k=i;i=0;}
	}
	printf("%d",a[k]);
}