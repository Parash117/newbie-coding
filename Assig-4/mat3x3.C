#include<stdio.h>
int main(){
 int mat1[3][3],mat2[3][3], mat3[3][3];
 int a,b,c,d,e, sum = 0;
 
 printf("Enter the numbers in matrix A \n");
 
 for(a=0;a<3;a++){
	e = a+1;
	printf("\n input numbers in row %d : \n", e);
	for(b=0;b<3;b++){
		scanf("%d", &mat1[a][b]);
	}
 }
 
 e =0;
 printf("Enter the numbers in matrix B \n");
 
 for(a=0;a<3;a++){
	e = a+1;
	printf("\n input numbers in row %d : \n", e);
	for(b=0;b<3;b++){
		scanf("%d", &mat2[a][b]);
	}
 }
 
 //calculation 
 
 for(a=0;a<3;a++){
	for(b=0;b<3;b++){
		for(c=0;c<3;c++){
			for(d=0;d<3;d++){
				sum += mat1[b][d]*mat2[d][c];
			}
			
		}
		mat3[a][b] = sum;
			sum = 0;
	}
 }
 
 for(a=0;a<3;a++){
	for(b=0;b<3;b++){
		printf("%d \t", mat3[a][b]);
		
	}
	printf("\n");
 }
 
 
 return 0;

}