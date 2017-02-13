//a function Power that computes X raised to the power Y for integer X and Y and return double type value
#include<stdio.h>
long int power(int, int);

int main(){
	int x,y;
	printf("Enter a number to find the power of : ");
	scanf("%d", &x);
	printf("\nEnter the power you want to make of %d : ", x);
	scanf("%d", &y);
	
	power(x,y);

}

long int power(int i, int j){
	int root=1;
	
	for(int a = 0;a<j;a++){
		root *= i;
	}
	printf("The result is : %d", root);
	
 return 0;
}