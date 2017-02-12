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
	add(a,b);
	break;
	
	case '-' :
	sub(a,b);
	break;
	
	case '*' :
	mul(a,b);
	break;
	
	case '/' : 
	div(a,b);
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
	printf("= %d", sum);
 return 0;	
}

int sub(int e, int f){
	int res;
	res = e-f;
	printf("= %d", res);
 return 0;	
}

int mul(int e, int f){
	int res;
	res = e*f;
	printf("= %d", res);
    return 0;	
}

float div(int e, int f){
	float res;
	res = e/f;
	printf("= %d", res);
	return 0;
}