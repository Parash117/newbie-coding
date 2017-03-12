//WAP that uses pointer to copy an array of integer
#include<stdio.h>
int reg(int *a, int n);
int copier(int *x, int *y, int z);
int main(){
	int m,i;
	printf("How many number do you want to store in the array ? : ");
	scanf("%d", &m);
	int array1[m], array2[m];
	
	reg(array1, m);
	printf("The Original Array : \n");
	for(i=0; i<m; i++){
		printf("%d\n", array1[i]);
	}
	printf("The duplicated array is : \n");
	copier(array1, array2, m);
	for(i=0; i<m; i++){
		printf("%d\n", array2[i]);
	}
	return 0;
}
int reg(int *a, int n){
	printf("Enter the numbers \n");
	for(int i=0; i<n; i++){
		scanf("%d",  &*(a+i));
	}
	return 0;
}
int copier(int *x, int *y, int z){
	for(int i=0; i<z; i++){
		*(y+i)=*(x+i);
	}
	return 0;
}