#include<stdio.h>
int sum(int a[], int n ){
	int i, sum =0;
	for(i=0 ; i<n ; i++){
		sum+=a[i];
	}
	return sum+=a[i];
}
int main(){
	int a[1000],i,n;
	
	printf("Enter size of the array : ");
	scanf("%d",&n);
	
	printf("Enter element in Array : ");
	
	for(i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
	}
	printf("sum of the array is : %d",sum(a,n));
	return 0;
}
