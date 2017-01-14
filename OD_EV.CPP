#include<stdio.h>
#include<conio.h>
void main(){
 clrscr();

 int a;
 printf("Enter a Number: ");
 scanf("%d", &a);

 if(a%2 == 0){
	printf("The Number is Even");
 }
 else{
	printf("The Number is Odd");
 }
 getch();

	}