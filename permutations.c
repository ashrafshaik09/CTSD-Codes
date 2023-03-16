#include<stdio.h>
int main()
{
	int n,r,p,i,s=1,q,t=1,u;
	printf("Enter n,r values\n");
	scanf("%d%d",&n,&r);
	for(i=1;i<=n;i++)
	{
		s=s*i;
	
	}
	for(i=1;i<=r;i++)
	{
		u=u*i;
	
	}
	q=n-r;
	for(i=1;i<=q;i++)
	{
		t=t*i;
	}
	p=(s/t)*u;
	printf("Permutations of n,r=%d",p);
}