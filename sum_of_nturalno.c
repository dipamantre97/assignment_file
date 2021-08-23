//WAP to calculate sum of natural nos from given range
#include<stdio.h>
int sum(int num)
{

	if(num==0)
		return 0;
	else
		return(num+sum(num-1));
}

int main()
{
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	printf("%d",sum(n));
	return 0;
}
