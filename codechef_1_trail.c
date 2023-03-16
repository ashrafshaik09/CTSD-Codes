#include<stdio.h>
int main()
{
	int A,B,T,i=1,s;
	scanf("%d\n",&T);
	{
	while(i<=T)
	scanf("%d\t%d",&A,&B);
	s=A+B;
	}
	for(i=1;i<=T;i++)
	{
		printf("%d\n",s);
	}
}



#include<stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>=y)
	     printf("%d\n",x);
	     else
	     printf("%d\n",y);
	}
	return 0;
}