#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d\t",a[j][i]);
			}
			printf("\n");
		}
}