#include<stdio.h>
main()
{
	int a,b;
	int *p;
	int *q;
	printf("Enter a,b values\n");
	scanf("%d%d",&a,&b);
	p=&b;
	q=&a;
	printf("Peg A=%d\n",*p);
	printf("Peg B=%d",*q);
}