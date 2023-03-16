#include<stdio.h>
main()
{
	int a,b,c,max,min,diff;
	printf("Enter student marks\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		max=a;
		if(b>c)
		{
			min=c;
		}
	}
	if(b>a&&b>c)
	{
		max=b;
		if(c>a)
		{
			min=a;
		}
	}
	if(c>a&&c>b)
	{
		max=c;
		if(a>b)
		{
			min=b;
		}
	}
	diff=max-min;
	printf("Difference=%d",diff);
	return 0;
}