#include<stdio.h>
int main(){
 
 int m,n,a,b,c,sum=0;
 printf("Enter the dimension of matrix in (ixj) form : \n");
 scanf("%d", &m);
 scanf("%d", &n);
 
 int mat[m][n];
 printf("Enter the elements : \n");
 
 for(a=0; a<m; a++){
 c = a+1;
 printf("\n For row %d : \n", c);
	for(b=0; b<n; b++){
		scanf("%d", &mat[a][b]);
	}

 } 
 printf("\n");
 
 //summing up
 
 
 for(a=0; a<m; a++){
	for(b=0; b<n; b++){
		printf("%d \t", mat[a][b]);
		sum+=mat[a][b];
		
	}
	printf("%d", sum);
	printf("\n"); 
	sum = 0;
 }
 
 for(a=0; a<n; a++){
	for(b=0; b<m; b++){
		sum += mat[b][a];
		
	}
	printf("%d \t", sum);
	sum=0;
	//print("");
 }
 
 return 0;
}