#include<stdio.h>
int main()
{
	int i,n,factors=0;
	printf("Enter an integer\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++);
	{
		if(n%i==0)
{
	factors=factors+1;
}
	}
	if (factors==2)
	printf("Prime");
	else
	printf("Not a prime");
return 0;
}

