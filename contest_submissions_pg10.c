#include<stdio.h>
#include<math.h>
main()
{
	int x,sub,sec;
	printf("Enter min of contest\n");
	scanf("%d",&x);
	sec=x*60;
	sub=(sec-5)/30;
	printf("Total submissions=%d",sub); 
}