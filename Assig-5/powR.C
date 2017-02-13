//to ask a number and Power to be calculated for that number.
#include<stdio.h>
long int power_adder(int, int);
long root = 1;
int main(){
	int x,y;
	printf("Enter a number to find the power of : ");
	scanf("%d", &x);
	printf("\nEnter the power you want to make of %d : ", x);
	scanf("%d", &y);
	
	printf("The result is : %d", power_adder(x,y));

}

long int power_adder(int x, int y){
	
	if(y==0){
		return root;
	}
	root *= x;
	return power_adder(x, --y);
	
}