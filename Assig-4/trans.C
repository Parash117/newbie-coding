#include<stdio.h>
int main(){
 
 int m,n,a,b;
 printf("how many diension of matrix you want ? \n");
 scanf("%d", &m);
 printf("X");
 scanf("%d", &n);
 
 int mat[m][n];
 printf("Input the value in the matrix \n");
 
 for(a=0; a<m; a++){
	int c=a+1;
	printf("Enter number for %d : \n");
	for(b=0; b<n; b++){
		scanf("%d", &mat[a][b]);
	
	}
	printf("\n");
 }
 
 for(a=0; a<m; a++){
	for(b=0; b<n; b++){
		printf("%d \t", mat[b][a]);
	
	}
 printf("\n");
 }
 
return 0;
}