#include<stdio.h>
int main()
{
	int a[10],i,j,n,temp,min;
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the elements into the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("before swapping");
	for(i=0;i<n;i++)
	{
		printf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	printf("after swapping");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
