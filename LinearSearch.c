#include<stdio.h>
int linearsearch(int[],int,int);
int main()
{
	int a[100],i,n,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	int index=linearsearch(a,n,k);
	if(index==-1)
		printf("Key not found");
	else
		printf("Key found at %d index",index);
	return 0;		
}
int linearsearch(int a[],int n,int k)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
			return i;
	}
	return -1;
}