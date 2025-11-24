#include<stdio.h>
int add();
int main()
{
	add();
}
int add()
{
	int a,b,sum=0;
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum is %d",sum);
}
