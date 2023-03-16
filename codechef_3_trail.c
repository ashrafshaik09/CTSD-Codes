#include<stdio.h>
int main()
{
	int T,X,Y,A,B;
	float c,ci;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%d%d",&A,&B,&X,&Y);
		c=A/X;
		ci=B/Y;
		if(c==ci)
		printf("Both\n");
		else if(ci>c)
		printf("Chef\n");
		else
		printf("Chefina\n");
	}
	return 0;
}