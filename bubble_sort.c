#include<stdio.h>
int bubble(int a[], int n){
	
	for (int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}		
}

int main(){
	int a[20],n;
	printf("enter size you want for array :");
	scanf("%d",&n);
	
	printf(" enter elemets of array :");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	bubble(a,n);
    printf("sorted array :");
	for(int i=0;i<n;i++){
		printf("\t%d",a[i]);
	}		
}
