#include<stdio.h>
int main()
{
	int a[10],i,pos,ele;
	printf("Enter the elements in the array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position\n");
	scanf("%d",&pos);
	printf("Enter the element");
	scanf("%d",&ele);
	for(i=4;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=ele;
	for(i=0;i<=5;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
