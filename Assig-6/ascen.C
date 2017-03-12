//WAP to sort n numbers in ascending order using DMA
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,temp, *a=NULL, n;
	printf("Enter the size of the array you want : ");
	scanf("%d", &n);
	
	a=(int*)malloc(n*sizeof(int));
	printf("Enter the numbers one bye one : \n");
	for(i=0; i<n; i++){
		scanf("%d", (a+i));
	}
	
	//ascending
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(*(a+i)<*(a+j)){
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
	printf("The arranged order is : \n");
	for(i=0; i<n; i++){
		printf("%d\n", *(a+i));
	}
	
 return 0;
 }