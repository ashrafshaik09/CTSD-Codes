#include<stdio.h>
void qsort(int[],int,int);
int main()
{
    int n,i,a[15];      
      printf("enter the number of elements");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
            scanf("%d",&a[i]);
      }
      qsort(a,0,n-1);
      printf("the sorted elements");
      for(i=0;i<n;i++)
      {
            printf("%d\t",a[i]);
            
      }
}
void qsort(int a[15],int first,int last)
{
      int i,j,temp,pivot;
      if(first<last)
      {
            pivot=first;
            i=first;
            j=last;
            while(i<j)
            {
            
            while(a[i]<=a[pivot] && i<last)
            i++;
            while(a[j]>a[pivot])
            j--;
            if(i<j)
            {
                  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
            }}
            temp=a[pivot];
            a[pivot]=a[j];
            a[j]=temp;
            qsort(a,first,j-1);
            qsort(a,j+1,last);
      }
            }
