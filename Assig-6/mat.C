//To read a m*n matrix entered by the user and display it's transpose using DMA
#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,n,i,j;
	printf("Please enter the dimension of the matrix (m*n): ");
	scanf("%d", &m);
	scanf("%d", &n);
	int **matrix;
	matrix=(int**)malloc(sizeof(int*)*m);
	for(i=0; i<m; i++){
		matrix[i]=(int*)malloc(sizeof(int)*n);
	}
	printf("Enter the number is matrix");
	for(i=0; i<m; i++){
		printf("\nEnter the numbers in row %d :", i+1);
		for(j=0; j<n; j++){
			scanf("%d", ((matrix+i)+j));
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d", *(*(matrix+i)+j));
		}
	}
	return 0;
}