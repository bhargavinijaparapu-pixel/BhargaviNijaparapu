#include<stdio.h>
int main()
{
	char name[20],ch,get;
	int i=0;
	while(ch!='\n')
	{
	ch = getchar();
		name[i]=ch;
		i++;
	}
	printf("%s",name);
	return 0;	
}
