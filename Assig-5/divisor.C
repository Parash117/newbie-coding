//TTo find all it's divisor
#include<stdio.h>
int divisor(int);

int main(){
 int n;
 printf("Enter the number you want : ");
 scanf("%d", &n);
 
 divisor(n);
 
	return 0;
}

int divisor(int a){
	int b;
	printf("It's Divisors are : \n");
	for(b=1;b<=a;b++){
		if(a%b==0){
			printf("%d \n", b);
		}
	}

	return 0;
}