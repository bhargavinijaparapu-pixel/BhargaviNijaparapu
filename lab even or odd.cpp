#include<stdio.h>
int main()
{
	int n=1010;
	if(n%2==0)
	goto even;
	else
	goto odd;
	even:printf("%d is even",n);
	return 0;
	odd:printf("%d is odd",n);
	return 0;
}
