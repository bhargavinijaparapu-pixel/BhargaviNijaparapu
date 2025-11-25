#include<stdio.h>
int main()
{
	char name[10]="Bhargavi\0";
	int i=0,ch;
	{
	while(name!='\0')
	putchar (name[i]);
	i++;
}
putchar("\n");
return 0;
}
