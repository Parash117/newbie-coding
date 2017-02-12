#include<stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);

int main(){
 int a,b;
 printf("Enter any two value : \n");
 
 scanf("%d", &a);
 scanf("%d", &b);
 
 int q = add(a,b);
 printf("The sum is : %d", q);
 printf("\n");
 
 int r = sub(a,b);
 printf("The difference is : %d", r);
 printf("\n");
 
 int s = mul(a,b);
 printf("The product is : %d", s);

 return 0;
}

int add(int e, int f){
	int sum;
	sum = e+f;
	
 return sum;	
}

int sub(int e, int f){
	int res;
	res = e-f;
	
 return res;	
}

int mul(int e, int f){
	int res;
	res = e*f;
	
 return res;	
}