#include<stdio.h>
int m[3];
int main()
{
	printf("Enter the marks\n");
	scanf("%d%d%d",&m[0],&m[1],&m[2]);
	if (m[0]!=m[1] && m[0]!=m[2] && m[1]!=m[2])
	{
		if (m[0]<m[1] && m[0]<m[2])
		{
			printf("Minimum marks=%d",m[0]);
		}
		else if (m[1]<m[2])
		{
			printf("Minimum marks=%d",m[1]);
		}
		else 
		{
			printf("Minimum marks=%d",m[2]);
		}
	}
	else 
	{
	printf("Marks are not distinct\n");
	}
	return 0;
}