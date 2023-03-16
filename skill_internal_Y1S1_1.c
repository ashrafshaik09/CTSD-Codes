#include<stdio.h>
int main()
{
	int n,s=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%5==0)
		s=s+i;
	}
	printf("%d",s);
	return 0;
}