#include<stdio.h>
int bubble_sort(int [], int);
int main()
{
    int i,a[20] ,r, n;
    printf("enter the number of element of the array:");
    scanf("%d", &n);
    printf("enter %d element of the array:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("before bubble sort:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    bubble_sort(a,n);
    printf("sorted list in ascending order:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
int bubble_sort(int a[],int n)
{
  int i,j,t;
  for(i=0;i<n-1;i++) 
 {
      for(j=0;j<n-i-1;j++)
     {
        if(a[j]>a[j+1]) 
       {
           t=a[j];
           a[j]=a[j+1];
           a[j+1]=t;
       }
     }
  }
}
