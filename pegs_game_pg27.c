#include<stdio.h>
main()
{
	int a,b,A,B,C;
	printf("Enter the balls\n");
	scanf("%d%d",&a,&b);
	printf("Enter the places of a,b balls\n");
	scanf("%d%d",&A,&B);
	C=a;
	A=b;
	B=a;
	printf("After swapping:\n");
	printf("Peg A=%d\n",A);
	printf("Peg B=%d\n",B);
}