#include<stdio.h>
int main()
{
	int num;
	int mask=0x1;
	printf("enter a number:");
	scanf("%d",&num);
	if((num&mask)==0)
	{
		num=num/2;
		printf("%d",num);
		
	}
	else
	{
		num=num*2;
		printf("%d",num);
	}
	
}
