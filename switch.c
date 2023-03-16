#include<stdio.h>
int main()
{
	char x;
	scanf("%c",&x);
	switch (x)
	{
		case 'a':
			printf("Ada");
			break;
		case 'A':
			printf("Ada");
			break;	
		case 'b':
			printf("Basic");
			break;
		case 'B':
			printf("Basic");
			break;	
		default:
			printf("nah");		
	}
}