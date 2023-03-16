#include<stdio.h>
main()
{
	int a[3],max,min,diff;
	printf("Enter student marks\n");
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	if(a[0]>a[1]&&a[0]>a[2])
	{
		max=a[0];
		if(a[1]>a[2])
		{
			min=a[2];
		}
	}
	else if(a[1]>a[0]&&a[1]>a[2])
	{
		max=a[1];
		if(a[0]>a[2])
		{
			min=a[2];
		}
	}
	else
	{
		max=a[2];
		if(a[0]>a[1])
		{
			min=a[1];
		}
	}
	diff=max-min;
	printf("Difference=%d",diff);
	return 0;
}