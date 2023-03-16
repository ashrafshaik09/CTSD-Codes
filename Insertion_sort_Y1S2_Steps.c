
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i,j,key,n,k;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        key=a[i];
        j=i-1;
        while(a[j]>key && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
       
        a[j+1]=key;
         for(k=0; k<n; k++)
        {
             printf("%d  ",a[k]);
        }
        printf("\n");
        
    }
}