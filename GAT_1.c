#include<stdio.h>

int fact(int n){
	if(n==1 || n==0){
		return 1;
	}
	else if(n<0){
		printf("NOT POSSIBLE");
	}
	else{
		return n*fact(n-1);
	}
}
int main(){
	int a;
	printf("Enter Value : ");
	scanf("%d",&a);
	
	printf("Factorial : %d",fact(a));
	
	return 0;
	}	

