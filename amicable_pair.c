#include<stdio.h>
int main()
{
	int a,b,f1,f2,i,s1=0,s2=0;
	printf("Enter a,b values\n");
	scanf("%d%d",&a,&b);
	for (i=1;i<a;i++)
	{
		if (a%i==0)
		{
			s1=s1+i;
		}
		f1=s1;
	}
	for (i=1;i<b;i++)
	{
		if (b%i==0)
		{
			s2=s2+i;
		}
		f2=s2;
	}
	if (f1==b && f2==a)
	{
		printf("Amicable pair\n");
	}
	else
	{
		printf("Not an Amicable pair\n");
	}
}