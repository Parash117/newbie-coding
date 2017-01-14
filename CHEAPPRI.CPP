//note : it is a cheap way to find a prime number
#include<stdio.h>
#include<conio.h>
void main(){
 clrscr();

 int a;
 printf("Enter a number to fine if its prime or not: \n");
 scanf("%d", &a);

 if(a==1){

 	printf("The Number is Neither Prime or Composite");
 }

 else if(a == 2 || a == 3){
	printf("The Number is prime");

 }
 else if(a%2 == 0 || a%3 == 0){
	printf("The Number is not Prime");
 }
 else{
	printf("The Number is Prime");
 }
 getch();
}