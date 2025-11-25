#include<stdio.h>
int main()
{
	int a[3][3],i,j,r,c,sum=0;
	printf("enter rows and columns");
	scanf("%d%d",&r,&c);
	printf("enter the elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++);
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("trace of the matrix is:  %d",sum);
	printf("\n");
	return 0;	
}
