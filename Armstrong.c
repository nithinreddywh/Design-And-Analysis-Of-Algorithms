#include<stdio.h>
#include<math.h>
int main(){
	int n,t,rem,sum=0,count,r;
	printf("Enter the numbet to check:");
	scanf("%d",&n);
	t=n;
	r=n;
	count=(n==0)?1:log10(n)+1;  
	while(t>0){
		rem=t%10;
		sum+=pow(rem,count);
		t=(t/10);
	}
	if(n==sum){
		printf("The given number %d is armstrong",n);
	}
	else{
		printf("The given number %d is not a armstrong",n);
	}
}
