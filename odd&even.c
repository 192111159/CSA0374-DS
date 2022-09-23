#include<stdio.h>
int main()
{
	int num,rem;
	printf("enter an set number");
	scanf("%d",&num);
	rem=num%2;
	if(rem==0)
	{
		printf("it is an even number",num);
	}
	else
	{
		printf("it is an odd number",num);
	}
	return 0;
}
