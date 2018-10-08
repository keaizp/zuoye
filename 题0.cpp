#include<stdio.h>
int main(){
	int i,j,temp,a[10]={12,23,45,56,84,23,12,45,95,15};
	for(i=0;i<=9;i++){
		for(j=0;j<=9-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
    }
	for(i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}