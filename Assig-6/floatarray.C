//Write a function that passes an array of n pointers to floats and returns a newly created array that contains those n floats in revers order.
#include<stdio.h>

void rev(float *a, float *b, int n);

int main(){
	int n,i;
	printf("Enter the limit of the array : ");
	scanf("%d", &n);
	float array1[n],array2[n];
	//where array1 is the orginal Array and The array2 is the Copied and Reversed Array
	
	printf("Enter the numbers in the array : \n");
	for(i=0; i<n; i++){
		scanf("%f",  &array1[i]);
	}
	printf("This is the original Array with their corresponding address\n");
	printf("Element\t\t\t\tAddress\n");
	for(i=0; i<n; i++){
		printf("%f\t\t\t%u\n", array1[i],  (array1+i));
	}
	
	rev(array1, array2, n);
	return 0;
}
void rev(float *a,float *b, int n){
	int i, j=n-1;
	for(i=0; i<n; i++){
		*(b+j) = *(a+i);
		--j;
	}
	printf("The elements in the new array is : \nElement\t\t\t\tAddress\n");
	for(i=0; i<n; i++){
		printf("%f\t\t\t%u\n", *(b+i), (b+i));
		//printf("%f\t\t%u\n", *(a+i), (a+i));
	}
}