#include<stdio.h>
int main()
{
	int n,f1,f2,f3,s=0;
	printf("Enter n value\n");
	scanf("%d",&n);
	f1=0;
	f2=1;
	while((f3=f2+f1)<=n)
	{
		if(f3%2==0)
		s=s+f3;
		f1=f2;
		f2=f3;
	}
	printf("Sum of even numbers=%d",s);
	return 0;
}