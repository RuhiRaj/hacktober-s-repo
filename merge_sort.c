#include<stdio.h>

int merge(int [],int,int,int);	
int main()
{
	int n,a[20],i;
	printf("Enter Size of array that you want :");
	scanf("%d",&n);
	printf("Enter elements :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
 mergeSort(a,1,10);
 printf("sorted array :");
 for(i=0;i<=n;i++)
 printf("%d \n",a[i]);
 printf("\n");

 return 0;
}

int merge(int a[],int l,int mid,int h){
	int i=l,j=mid+1,k=l;
	int b[20];
	while(i<=mid&&j<=h){
		if(a[i]<a[j]){
			b[k++]=a[i++];
		}
		else
		   b[k++]=a[j++];
	}
	for(;i<=mid;i++)
		b[k++]=a[i];
	for(;j<=h;j++)
	    b[k++]=a[j];
	    
	for(i=l;i<=h;i++)
	a[i]=b[i];
}
	
 int mergesort(int a[], int l, int h){
	if(l<h){
		 int mid;
		 mid=(l+h)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		merge(a,l,mid,h);
	}
}



