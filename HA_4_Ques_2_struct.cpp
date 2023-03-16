#include<stdio.h> 
struct subscriber 
{ 
 char name[50],street[50],address[100]; 
 float monthly_bill; 
}s[100]; 
int main() 
{  
 int n,t,i; 
 for(i=0; i<10; i++)
{ 
	 printf("Enter subscriber %d details : \n",i+1); 
	 printf("Name : "); 
	 scanf("%s",s[i].name); 
	 printf("Street : "); 
	 scanf("%s",s[i].street); 
	 printf("Address : "); 
	 scanf("%s",s[i].address); 
	 printf("Monthly bill : "); 
	 scanf("%f",&s[i].monthly_bill); 
	 printf("\n"); 
 } 
 printf("Subscribers having monthly bill less than 750 : \n"); 
 for(i=0; i<10; i++)
{ 
 if(s[i].monthly_bill<750) 
 	{ 
	 printf("Name : %s\n",s[i].name); 
	 printf("Street : %s\n",s[i].street); 
	 printf("Address : %s\n",s[i].address); 
	 printf("Monthly bill : %f\n",s[i].monthly_bill); 
	 printf("\n"); 
 	} 
 } 
 return 0; 
}