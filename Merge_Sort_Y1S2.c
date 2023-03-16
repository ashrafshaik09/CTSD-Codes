#include<stdio.h>
#include<stdlib.h>

void merge(int a[],int l,int m,int h);
void print(int a[],int l,int h)
{
   
    for(int i=l;i<=h;i++)
    printf("%d ",a[i]);
     printf("\n");
}
void mergesort(int a[],int l,int h)
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
        
               
        mergesort(a,l,m);

        mergesort(a,m+1,h);

        merge(a,l,m,h);
        
    }
}
void merge(int a[],int l,int m,int h)
{
   int *temp=(int *)malloc(sizeof(int)*(h-l+1));
    int i=l;
    int j=m+1;
    int k=0;

    while(i<=m&&j<=h)
    {
        if(a[i]<=a[j])
        {
        
        temp[k++]=a[i++];
        
        }
        else
        {
        
        temp[k++]=a[j++];
       
        }
        
         
    }
    while(i<=m)
    {
    temp[k++]=a[i++];    
    }
    while(j<=h)
    {
    temp[k++]=a[j++];    
    }
    i=l;
    k=0;
    
    while(i<=h)
    a[i++]=temp[k++];
  print(a,l,h);  

}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a, 0, n-1);
    return 0;
}