//To read a m*n matrix entered by the user and display it's transpose using DMA
#include<stdio.h>
#include<stdlib.h>
int transpose(int**,int,int);
int main(){
	int m,n,i,j;
	printf("Please enter the dimension of the matrix (m*n): \n");
	scanf("%d", &m);
	scanf("%d", &n);
	int **matrix=NULL;
	matrix=(int**)malloc(sizeof(int*)*m);
	matrix[0]=(int*)malloc(sizeof(int)*n*m);
	for(i=0; i<m; i++){
		matrix[i]=(*matrix + n*i);	//(int*)malloc(sizeof(int)*n);
	}
	printf("Enter the number is matrix");
	for(i=0; i<m; i++){
		printf("\nEnter the numbers in row %d :\n", i+1);
		for(j=0; j<n; j++){
			scanf("%d", &*(*(matrix+i)+j));
		}
	}
	
	
	printf("\nOriginal Matrix:\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d\t", *(*(matrix+i)+j));
		}
		printf("\n");
	}
	
	transpose(matrix,m,n);
	
	return 0;
}

int transpose(int** matrix,int m,int n){
	int i,j;
	printf("\nTransposed Matrix\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d\t", *(*(matrix+j)+i));
		}
		printf("\n");
	}
	return 0;
}