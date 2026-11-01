#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("Enter operator:");
	scanf("%c",&ch);
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case '+':printf("Addition=%d",a+b);
		break;
		case '-':printf("Subtraction=%d",a-b);
		break;
		case '*':printf("Multiplication=%d",a*b);
		break;
		case '/':printf("Division=%d",a/b);
		break;
		case '%':printf("Remainder=%d",a%b);
		break;
	}
	return 0;
}
