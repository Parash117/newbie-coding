#include<stdio.h>
#include<conio.h>
void main(){
 clrscr();

 int a;
 printf("Enter a number to see if it is +ve or -ve: ");
 scanf("%d", &a);

 if(a == 0){
  printf("The number is neither negative nor positive");
 }
 else if(a > 0){
 printf("The number is positive");
 }
 else{
 printf("The number is negative");
 }

 getch();
		}