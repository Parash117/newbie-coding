#include<stdio.h>
void div();
int div1(int x);
int div2(int x);
int div3();

int main(){
 int a;
 printf("Enter any NUmber : ");
 scanf("%d", &a);
 printf("\n");
 printf("\n");
 //********************
 //by No return with Arg
 //********************
 div1(a);
 //--------------------
 printf("\n");
 printf("\n");
 //*********************
 //by Return with Arg
 //*********************
	if(div2(a)==1){
		printf("The number is divisible by 5 or 7");
		
		}
	else{
		printf("The number is not divisible by 5 or 7");
	}
 //-----------------------
 
	printf("\n");
	printf("\n");
 //********************
 //by No return No Arg
 //********************
	div();
 //--------------------
	printf("\n");
	printf("\n");

 //*********************
 //by Return with no Arg
 //*********************
	if (div3()==1){
		printf("the number is divisible by 5 or 7");
	}
	else{
		printf("the number is not divisible bt 5 or 7");
	}
 //---------------------
 
 
 return 0;
}


void div(){
	int b;
	printf("-----------------------------------------------\n");
	printf("**This was printed With No Arg and NO Neturn** \n");
	printf("-----------------------------------------------\n");
	printf("Enter any NUmber : ");
	scanf("%d", &b);
	printf("\n");
	if(b%5==0||b%7==0){
		printf("The number is divisible by 5 or 7");
		
	}
	else{
		printf("The number is not divisible by 5 or 7");
	}
	printf("\n------------------------------------------------\n");
}

int div1(int b){
	printf("------------------------------------------------\n");
	printf("**This was printed With Arg and NO Return** \n");
	printf("------------------------------------------------\n");
	if(b%5==0||b%7==0){
		printf("The number is divisible by 5 or 7");
		
	}
	else{
		printf("The number is not divisible by 5 or 7");
	}
	printf("\n------------------------------------------------\n");
return 0;
}


int div2(int b){
	int c;
	printf("------------------------------------------------\n");
	printf("**This was printed With Arg and Return** \n");
	printf("------------------------------------------------\n");
	if(b%5==0||b%7==0){
		c = 1;
	}
	else{
		c = 0;
	}
	
	return c;
}

int div3(){
	printf("------------------------------------------------\n");
	printf("**This was printed With No Arg and Return** \n");
	printf("------------------------------------------------\n");
	int c;
	int b;
 
	printf("Enter any number : ");
	scanf("%d",&b);
 
	if (b%5==0||b%7==0){
		c =1;
	}

	else {
		c=0;
	}
	
	
	return c; 
 }