#include<stdio.h>
int main()
{
	int n,p=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			p=p*i;	
		}
	}
	{
	if(p==2 || p==3 ||p==5)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
}