#include<stdio.h>
int main(){
int a,i,lis[10],b,j,r;
printf("Enter range:");
scanf("%d",&a);
for(i=0;i<a;i++){
	scanf("%d",&b);
	lis[i]=b;
}
for(i=0;i<a;i++){
	for(j=0;j<i;j++){
		if(lis[i]<lis[j]){
			r=lis[i];
			lis[i]=lis[j];
			lis[j]=r;
		}
	}
}
for(i=0;i<a;i++){
	printf("%d",lis[i]);
}
}
