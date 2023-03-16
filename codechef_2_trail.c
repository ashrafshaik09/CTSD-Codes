#include<stdio.h>
int main()
{
	int X,N,T,p,min=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&N,&X);
		p=N*X/4;
		if(p>=N)	
		printf("%d\n",p);
		else
		printf("%d\n",p+1);
	}
	return 0;	
}