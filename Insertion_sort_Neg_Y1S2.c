#include <stdio.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
        int n,i,j,temp;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i;j>0;j--)
            {
                if(a[j]<a[j-1])
                {
                    temp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
	}
	return 0;
}