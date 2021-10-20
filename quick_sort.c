#include<stdio.h>

int partition(int [],int,int);	
int main()
{
	int n,a[20],i;
	printf("Enter Size of array that you want :");
	scanf("%d",&n);
	printf("Enter elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
 Quick_Sort(a,0,n);
 printf("sorted array :");
 for(i=0;i<n;i++)
 printf("%d \n",a[i]);
 printf("\n");

 return 0;
}
int partition(int a[],int l,int h)
{
	int pivot=a[l];
	int i=l,j=h;
	
	do{
	
	do{
		i++;
	}while(a[i]<=pivot);
	
	do{
		j--;
	}while(a[j]>pivot);
	
	if(i<j){
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
    }while(i<j);
    
    int temp1=a[l];
		a[l]=a[j];
		a[j]=temp1;
		
	return j;
}

int Quick_Sort(int a[],int l,int h)
{
 int j;

 if(l<h)
 {
 j=partition(a,l,h);
 Quick_Sort(a,l,j);
 Quick_Sort(a,j+1,h);
 }	
}

