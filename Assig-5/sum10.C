//to find the sum upto 10
#include<stdio.h>
int add(int);

int main(){
	int a;
	printf("Enter the number upto where you want to print the sum : ");
	scanf("%d", &a);
	
	printf("The sum upto %d is : %d", a, add(a));
	

}

int add(int b){
	if(b==0){
	return 0;
	}
	return b+add(b-1);
}