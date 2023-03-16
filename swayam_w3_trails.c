#include <stdio.h> 
int fun(int x)
{ 
	int y; 
	if(x > 100) 
		y=x-10;
	else 
		y = fun(fun(x+11)); 
	return y;
}
int main()
{
 	int result = fun(95); 
	printf("%d\n", result); 
	return 0;
}