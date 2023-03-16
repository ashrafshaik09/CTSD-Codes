#include<stdio.h>
int binarysearch(int[],int,int);
int main()
{
	int a[100],i,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	int index=binarysearch(a,n,k);
	if(index==-1)
		printf("Key not found");
	else
		printf("Key found at %d index",index);
	return 0;		
}
int binarysearch(int a[],int n,int k)
{
	int l=0,r=n-1,m;
	while(l<r)
	{
		m=(l+r)/2;
		if(k==a[m])
			return m;
		else if(k>a[m])
		 r=m-1;
		else
		 l=m+1;		
	}	
	return -1;
}