#include <stdio.h>

int main() 
{
	int X,Y,A,T;
	scanf("%d",&T);
	while(T>=1 && T<=1000)
	{
	    scanf("%d%d%d",X,Y,A);
	    while(X>=20 && Y<=40)
	    {
	        while(A>=10 && A<=50)
	        {
	            if (A>=X && A<Y)
	            {
	                printf("YES\n");
	            }
	        }
	    }
	    {
	    	 printf("NO\n");
		}
	}
	return 0;
}

