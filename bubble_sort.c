#include <stdio.h>

void bubble_sort(int a[],int n);


void main()
{
     int a[]={12,3,6,34,4,-44,2,10,44};
     int n=sizeof(a)/sizeof(int);
     bubble_sort(a,n);
     for (int i=0;i<n;i++)
     printf("  %d  ",a[i]);
     printf("\n");
}


void bubble_sort(int a[],int n)
{
     //int n=sizeof(a)/sizeof(int);
     for (int i=0;i<n;i++)
     {
         for (int j=n-1;j>=i+1;j--)
         {
             if (a[j] < a[j-1])
            {
                 int temp=a[j];
                 a[j]=a[j-1];
                 a[j-1]=temp;
             }
         }
     }
}
