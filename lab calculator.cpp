#include<stdio.h>
int main()
{
	char op;
	double first,second;
	printf("enter the operator(+,-,*,/)");
	scanf("%c",&op);
	printf("enter two numbers");
	scanf("%1f%f",&first,second);
	switch(op){
		
		case '+':
			printf(".11f+f%.11f=%11f",first,second,first+second);
			break;
			case'-':
			printf("%.11f-%.11f=%11.f",first,second,first-second);
			case'*':
				printf("%11.f*%11.f=%11.f",first,second,first*second);
				case'/':
					printf("%11.f/%11.f=%11.f",first,second,first/second);
					break;
					default:printf("operator is not valid");
	               	}
	               	return 0;	
}
