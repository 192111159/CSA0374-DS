#include<stdio.h>
int main()
{
	int n,i,c,a=0,b=1;
	printf("enter teh number of terms");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
