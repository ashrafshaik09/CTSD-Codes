#include<stdio.h>
main()
{
	int bt,mt,ms,phd,ttl;
	float p;
	printf("Enter students joined and total\n");
	scanf("%d%d%d%d",&bt,&mt,&ms,&ttl);
	phd=ttl-(bt+mt+ms);
	printf("PhD students=%d\n",phd);
	p=(bt*100)/ttl;	
	printf("Percentage of B.Tech students=%f\n",p);
	p=(mt*100)/ttl;
	printf("Percentage of M.Tech students=%f\n",p);
    p=(ms*100)/ttl;
	printf("Percentage of M.S students=%f\n",p);
	p=(phd*100)/ttl;
	printf("Percentage of PhD students=%f",p) ;	
}