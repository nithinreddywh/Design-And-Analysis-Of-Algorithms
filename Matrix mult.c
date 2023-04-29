#include<stdio.h>
int main(){
	int a[10][10],b[10][10],a1,b1,a2,b2,k[10][10],r,i,j,l;
	printf("Enter the dimension of 1st matrix:");
	scanf("%d%d",&a1,&a2);
	printf("Enter the dimension of 2nd matrix:");
	scanf("%d%d",&b1,&b2);
	if(a2==b1){
	printf("Enter 1st matrix:\n");
	for(i=0;i<a1;i++){
		for(j=0;j<a2;j++){
			printf("Enter a[%d,%d]:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter 2nd matrix:\n");
	for(i=0;i<b1;i++){
	    for(j=0;j<b2;j++){
			printf("Enter b[%d,%d]:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<a1;i++){
		for(j=0;j<b2;j++){
			k[i][j]=0;
			for(l=0;l<a2;l++){
				k[i][j]+=a[i][l]*b[l][j];
			}
			
		}
	}
	printf("The product of matrix is:\n\n");
	for(i=0;i<a1;i++){
		for(j=0;j<b2;j++){
			printf("%d\t",k[i][j]);
		}
		printf("\n");
	}
}
else{
	printf("the given dimensions are not possible....:(");
}
}
