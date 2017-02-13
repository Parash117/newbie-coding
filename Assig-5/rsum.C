//To Find the sum of digits entered by the user
#include<stdio.h>
int sum(int, int);

int main(){
	int a,b;
	printf("Enter any two numbers \n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("The sums is : %d", sum(a,b));

}

int sum(int a, int b){
	int c;
	if(c==a+b){
		return 0;
	}
	return a+sum(b);
}