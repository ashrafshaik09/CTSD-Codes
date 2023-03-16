#include<stdio.h>
main()
{
	int a=10;
	int *p;
	p=&a;
	printf("address=%u\n",p);
	printf("Value=%d",*p);
}