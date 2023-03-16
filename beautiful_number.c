#include<stdio.h>
int main()
{
    int n,p=1,i;
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        if(n%i==0)
        {
        if(i==2||i==3||i==5)
        p=p*i;
        }
    }
    if(p==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}