//a program that uses pointers to copy an array of double
#include<stdio.h>

int main(){
	int m,i;
	printf("How many elements do you want to store in a array ?");
	scanf("%d", &m);
	int j=m-1;
	double array1[m],array2[m];
	printf("Enter the numbers in the first array:\n");
	for(i=0; i<m; i++){
		scanf("%lf", &array1[i]);
	}
	
	printf("The elements in array1 is:\n");
	for(i=0; i<m; i++){
		printf("%lf\n", array1[i]);
	}
	
	printf("\nCopying in the second array");
	printf("\nThe Elements in second array\n");
	for(i=0; i<m; i++){
		array2[j] = *(array1+i);
		j--;
	}
	for(i=0; i<m; i++){
		printf("%lf\n", array2[i]);
	}
	return 0;
}