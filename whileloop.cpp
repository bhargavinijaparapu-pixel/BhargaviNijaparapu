#include<stdio.h>
int main()
{
	int i=0,j,c=0;
	do
	{
		int j=0;
		do
		{
			printf("%d\t",c++);
			j++;
		}
		while(j<3);
		printf("\n");
		i++;
	}
	while("i<3");
	return 0;
}
