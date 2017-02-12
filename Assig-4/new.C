#include<stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);

int main(){
 int a,b;
 char c;
 
 printf("Do your calculation below : \n");
 scanf("%d%c%d", &a,&c,&b);
 printf("\n");
 switch(c){
	case '+' :
	printf("= %d", add(a,b));
	break;
	
	case '-' :
	printf("= %d", sub(a,b));
	break;
	
	case '*' :
	printf("= %d", mul(a,b));
	break;
	
	case '/' : 
	printf("= %f", div(a,b));
	break;
	
	default :
	printf("Error");
	break;
 }
 
 
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

float div(int e, int f){
	float res;
	res = e/f;
 
 return res;
}