#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("enter your choice:\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("Addition=%d",a+b);
		break;
		case 2:printf("Subtraction=%d",a-b);
		break;
		case 3:printf("Multiplication=%d",a*b);
		break;
		case 4:printf("Division=%d",a/b);
		break;
		default:printf("please enter the correct choice");
		
	}
	return 0;	
}
