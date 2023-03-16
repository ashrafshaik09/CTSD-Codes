#include<stdio.h>
main()
{
	int n,d,min;
	float hr,ttl;
	printf("Enter the day\n");
	scanf("%d",&n);
	d=(2*n)-1;
	printf("Problems solved=%d\n",d);
	printf("Enter time taken to solve in minutes\n");
	scanf("%d",&min);
	ttl=d*min;
	hr=ttl/60;
	printf("Total duration in months=%f",hr);
}