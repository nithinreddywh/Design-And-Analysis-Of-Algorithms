#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the range if series:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf(" %d ",fib(i));
	}
}

int fib(int a){
	if(a==0){
		return 0;
	}
	else if(a==1){
		return 1;
	}
	else{
		return fib(a-1)+fib(a-2);
	}
}
